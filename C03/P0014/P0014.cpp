// P0014.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>

int main()
{
  std::vector<std::string> v;
  auto pos = v.begin();
  auto lambda1 = [](int x) -> bool
  {
    return x > 0 ? true : false;
  };

  std::cout << lambda1(10) << std::endl;
}
