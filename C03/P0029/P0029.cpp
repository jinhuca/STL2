// P0029.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>

void f()
{
  int x = 0;
  int y = 42;
  auto qqq = [x, &y]
  {
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    ++y;
  };
  x = y = 77;
  x++;
  qqq();
  qqq();
  std::cout << "final y: " << y << std::endl;
}

void g()
{
  int id = 0;
  auto f = [id]() mutable
  {
    std::cout << "id: " << id << std::endl;
    ++id;
  };
  id = 42;
  f();
  f();
  f();
  std::cout << id << std::endl;
}
int main()
{
  //f();
  g();
}
