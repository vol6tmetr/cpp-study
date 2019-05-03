#include "../std_lib_facilities.h"

int main() {
  int number = 0;

  cout << "Write number: ";

  cin >> number;

  if (number % 2 == 0) {
    cout << "Number " << number << " is even\n";
  } else {
    cout << "Number " << number << " is odd\n";
  }
}
