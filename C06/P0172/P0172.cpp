// P0172.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <array>
#include <string>
using namespace std;

int main()
{
  // array container of 5 string elements:
  array<string, 5> coll = { "hello", "world" };

  // print each element with its index on a line
  for(int i = 0; i < coll.size(); ++i)
  {
    cout << i << ": " << coll[i] << endl;
  }
}
