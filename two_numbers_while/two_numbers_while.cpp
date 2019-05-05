#include "../std_lib_facilities.h"

int main() {
  cout << "Type in two numbers: ";

  int number_1 = 0;
  int number_2 = 0;

  while (cin >> number_1 >> number_2) {
    if (number_1 > number_2) {
      cout << "Biggest number is " << number_1 << "\n"
           << "Smallest number is " << number_2 << "\n";
    } else if (number_2 > number_1) {
      cout << "Biggest number is " << number_2 << "\n"
           << "Smallest number is " << number_1 << "\n";
    } else {
      cout << "Number " << number_1 << " is equal to " << number_2 << "\n";
    }
    cout << "Type in two numbers: ";
  }
}
