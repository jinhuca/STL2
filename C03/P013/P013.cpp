// P013.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <list>
#include <iostream>

void demo()
{
  std::vector<std::string> v = { "a", "b", "c" };
  auto pos = v.begin();
  auto l = [](int x) -> bool
  {
    if(x % 2 == 0) return true;
    return false;
  };
  std::cout << l(5) << std::endl;
}

void demo2()
{
  int values[] { 1, 2, 3 };
  std::vector<int> v{2, 3, 5, 7, 11, 13, 17};
  std::vector<std::string> citites { "Berlin", "New York", "London", "Braunschweig", "Cairo", "Cologne" };
}

void print(std::initializer_list<int> vals)
{
  for(auto p=vals.begin();p!=vals.end();++p)
  {
    std::cout << *p << std::endl;
  }
}

void lambdaDemo()
{
  []
  {
    std::cout << "hello lambda" << std::endl;
  }();
}

int main()
{
  std::vector<std::list<int>> v1;
  std::vector<std::list<int> > v2 = { {1, 2}, {3, 4} };
  std::cout << std::hex << 3.14 << std::endl;
  print({ 12, 3, 4, 1, 12, 45 });
  lambdaDemo();
}
