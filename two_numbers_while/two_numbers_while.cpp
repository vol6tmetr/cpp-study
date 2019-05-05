#include "../std_lib_facilities.h"

int main() {
  cout << "Type in two numbers: ";

  int number_1 = 0;
  int number_2 = 0;

  while (cin >> number_1 >> number_2) {
    cout << number_1 << ", " << number_2 << "\n"
         << "Type in two numbers: ";
  }
}
