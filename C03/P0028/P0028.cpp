// P0028.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void f()
{
  auto lambda = [] { std::cout << "hello lambda!" << std::endl; };
  lambda();
}

void g()
{
  auto lambda = [](const std::string &s) { std::cout << s << std::endl; };
  lambda("hello lambda!");
}

int main()
{
  []
  {
    std::cout << "hello lambda!" << std::endl;
  }();

  f();
  g();
}
