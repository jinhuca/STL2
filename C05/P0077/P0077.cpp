// P0077.cpp : shared pointer 1
#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

int main()
{
  // two shared pointers representing two persons by their names
  shared_ptr<string> pNico(new string("nico"));
  shared_ptr<string> pJutta(new string("jutta"));

  // capitalize person names
  (*pNico)[0] = 'N';
  pJutta->replace(0, 1, "J");

  // put them multiple times in a container
  vector<shared_ptr<string>> whoMakeCoffee;
  whoMakeCoffee.push_back(pJutta);
  whoMakeCoffee.push_back(pJutta);
  whoMakeCoffee.push_back(pNico);
  whoMakeCoffee.push_back(pJutta);
  whoMakeCoffee.push_back(pNico);

  // print all elements
  for(auto ptr: whoMakeCoffee)
  {
    std::cout << *ptr << "  ";
  }
  std::cout << endl;

  // overwrite a name again
  *pNico = "Nicolai";

  // print all elements again
  for(auto ptr : whoMakeCoffee)
  {
    std::cout << *ptr << "  ";
  }
  std::cout << endl;

  // print some internal data
  std::cout << "use_count: " << whoMakeCoffee[0].use_count() << std::endl;
}
