// P0062.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <utility>
#include <tuple>

class Foo {
public:
  Foo(std::tuple<int, float>)
  {
    std::cout << "Foo::Foo(tuple)" << std::endl;
  }
  template <typename... Args>
  Foo(Args... args)
  {
    std::cout << "Foo::Foo(args...)" << std::endl;
  }
};

int main()
{
  // create tuple t:
  std::tuple<int, float> t(1, 2.22);

  // pass the tuple as a whole to the constructor of Foo:
  std::pair<int, Foo> p1(42, t);

  // pass the elements of the tuple to the constructor of Foo:
  std::pair<int, Foo> p2(std::piecewise_construct, std::make_tuple(42), t);
}
