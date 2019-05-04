#include "../std_lib_facilities.h"

int main() {
  cout << "Type number as a string (ex. zerom one etc.): ";

  string input_string = "";

  while (cin >> input_string) {
    if (input_string == "zero") {
      cout << 0 <<  "\n";
    } else if (input_string == "one") {
      cout << 1 <<  "\n";
    } else if (input_string == "two") {
      cout << 2 <<  "\n";
    } else if (input_string == "three") {
      cout << 3 <<  "\n";
    } else if (input_string == "four") {
      cout << 4 <<  "\n";
    } else {
      cout << "Don't now that number!\n";
    }
  }
}
