#include "../std_lib_facilities.h"

int main()
{
  double number;
  cout << "Write a double number: ";
  cin >> number;
  cout << "Number:\n"
       << "*2: " << number * 2 << "\n"
       << "/2: " << number / 2 << "\n"
       << "+2: " << number + 2 << "\n"
       << "-2: " << number - 2 << "\n"
       << "square root: " << sqrt(number) << "\n";
}