#include "../std_lib_facilities.h"

int main()
{
  cout << "Write your name and age:\n";
  string name;
  int age;
  cin >> name;
  cin >> age;
  cout << "Hello, " << name << ", age: " << age << ", age (in months): " << age * 12 << "!\n";
  return 0;
}