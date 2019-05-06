#include "../std_lib_facilities.h"

int main() {
  cout << "Type in two numbers: ";

  constexpr double allowed_difference = 0.01;

  double number_1 = 0;
  double number_2 = 0;

  while (cin >> number_1 >> number_2) {
    if (number_1 > number_2) {
      cout << "Biggest number is " << number_1 << "\n"
           << "Smallest number is " << number_2 << "\n";
    } else if (number_2 > number_1) {
      cout << "Biggest number is " << number_2 << "\n"
           << "Smallest number is " << number_1 << "\n";
    } else if (number_1 == number_2) {
      cout << "Number " << number_1 << " is equal to " << number_2 << "\n";
    }

    if (abs(number_1 - number_2) < allowed_difference) {
      cout << "Numbers " << number_1 << " and "
           << number_2 << " are almost identical\n";
    }
    cout << "Type in two numbers: ";
  }
}
