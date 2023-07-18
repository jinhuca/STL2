// P0100.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <memory>

void f()
{
  std::unique_ptr<std::string> up(new std::string("nico"));

  (*up)[0] = 'N';
  up->append("lai");
  std::cout << *up << std::endl;
}

void g()
{
  std::unique_ptr<std::string> up;
  up = nullptr;
  up.reset();
}

int main()
{
  f();
}
