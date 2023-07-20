// P0174.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <list>
#include <iostream>
using namespace std;

int main()
{
  list<char> coll;        // list container for character elements

  // append elements from 'a' to 'z'
  for(char c='a'; c<='z';++c)
  {
    coll.push_back(c);
  }

  // print all elements
  // - while there are elements
  // - print and remove the first element
  while(!coll.empty())
  {
    cout << coll.front() << ' ';
    coll.pop_front();
  }
  cout << endl;
}
