// P0017.cpp : Range-based for loops.
//
#include <iostream>
#include <vector>

void f()
{
  std::vector<int> vec = { 2, 3, 5, 7, 9, 13, 17, 19 };
  for(const int &i : vec)
    std::cout << i << std::endl;

  for(auto &elem : vec)
    elem *= 3;

  for(const int &i : vec)
    std::cout << i << std::endl;
}

int main()
{
  f();
}
