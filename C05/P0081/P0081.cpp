// P0081.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>
#include <memory>
#include <cstdio>

class FileDeleter
{
private:
  std::string filename;
public:
  FileDeleter(const std::string &fn) :filename(fn) {}
  void operator()(std::ofstream* fp)
  {
    delete fp;                      // close file
    std::remove(filename.c_str());  // delete file
  }
};

int main()
{
  // create and open temporary file:
  std::shared_ptr<std::ofstream> fp(new std::ofstream("tempfile.txt"), FileDeleter("tempfile.txt"));
}
