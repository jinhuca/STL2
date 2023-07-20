// P0031.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <functional>

template<typename T1, typename T2>
auto add(T1 x, T2 y) -> decltype(x + y)
{
  return x + y;
}

std::function<int(int, int)> returnLambda()
{
  return [](int x, int y) { return x * y; };
}

int main()
{
  const auto lambdaFunction = returnLambda();
  std::cout << lambdaFunction(6, 7) << std::endl;
}
