/*
 * test1.cpp
 *
 *  Created on: 2021年11月16日
 *      Author: tony
 */
#include <iostream>
#include <string>

struct inflatable {
  char name[20];
  float volume;
  double price;
};

int main() {
  using namespace std;

  int carrots;
  cin >> carrots;
  carrots = carrots + 2;
  cout << "Now you have " << carrots << " carrots." << endl;
  std::cout << "all done" << std::endl;

  cin.get();
  const int SIZE = 20;
  char name[SIZE];
  cin.getline(name, SIZE);
  cout << "hello, " << name << "\n";

  char arr1[20];
  char arr2[20] = "Aangular";
  string str1;
  string str2 = "VueUse";
  cout << "enter to arr:";
  cin >> arr1;
  cout << "enter to str:";
  cin >> str1;
  cout << "arr1: " << arr1 << ", arr2: " << arr2 << ", str1: " << str1
      << ", str2: " << str2 << endl;

  inflatable guest = { "Glorious Gloria", 1.88, 29.99 };
  cout << "Guest name: " << guest.name;

  return 0;
}
