// P0015.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Uniform initialization and initializer lists
#include <iostream>
#include <vector>
#include <complex>

void uniformInitialize()
{
  int values[] { 1, 2, 3 };
  std::vector<int> v {2, 3, 5, 7, 11, 13, 17};
  std::vector<std::string> cities { "Berlin", "New York", "London", "Cairo", "Cologne" };
  std::complex<double>{4.1, 3.5};
}

int main()
{
  std::cout << "Hello World!\n";
}
