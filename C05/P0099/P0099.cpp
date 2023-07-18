// P0099.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>

class ClassA
{
public:
  ClassA() {  }
  ~ClassA() { std::cout << "Destructed." << std::endl; }
};

void f()
{
  std::unique_ptr<ClassA> ptr(new ClassA);
}

int main()
{
  f();
  std::cout << "End" << std::endl;
}
