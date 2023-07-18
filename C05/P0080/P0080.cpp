// P0080.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <vector>
#include <memory>

void f()
{
  std::shared_ptr<std::string> pNico(
    new std::string("nico"),
    [](std::string *p)
    {
      std::cout << "delete " << *p << std::endl;
      delete p;
    });
  pNico = nullptr;
}

void g()
{
  std::shared_ptr<std::string> pNico(
    new std::string("nico"),
    [](std::string *p)
    {
      std::cout << "delete " << *p << std::endl;
      delete p;
    });
  std::shared_ptr<std::string> pJutta(
    new std::string("jutta"),
    [](std::string *p)
    {
      std::cout << "delete " << *p << std::endl;
      delete p;
    });
  std::vector<std::shared_ptr<std::string>> whoMadeCoffee;
  whoMadeCoffee.push_back(pJutta);
  whoMadeCoffee.push_back(pJutta);
  whoMadeCoffee.push_back(pNico);
  whoMadeCoffee.push_back(pJutta);
  whoMadeCoffee.push_back(pNico);
}

void h()
{
  std::shared_ptr<int> p(new int[10],
    [](int *p)
    {
      delete[] p;
    });

  std::shared_ptr<int> q(
    new int[10],
    std::default_delete<int[]>());
}

int main()
{
  g();
}
