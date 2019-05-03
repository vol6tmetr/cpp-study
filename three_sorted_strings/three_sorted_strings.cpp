#include "../std_lib_facilities.h"

int main() {
  cout << "Write three strings: ";

  string string_1 = "";
  string string_2 = "";
  string string_3 = "";

  cin >> string_1 >> string_2 >> string_3;

  string smallest_string = "";
  string middle_string = "";
  string biggest_string = "";

  if (string_1 <= string_2 && string_1 <= string_3) {
    smallest_string = string_1;
    if (string_2 <= string_3) {
      middle_string = string_2;
      biggest_string = string_3;
    } else {
      middle_string = string_3;
      biggest_string = string_2;
    }
  } else if (string_2 <= string_1 && string_2 <= string_3) {
    smallest_string = string_2;
    if (string_1 <= string_3) {
      middle_string = string_1;
      biggest_string = string_3;
    } else {
      middle_string = string_3;
      biggest_string = string_1;
    }
  } else {
    smallest_string = string_3;
    if (string_1 <= string_2) {
      middle_string = string_1;
      biggest_string = string_2;
    } else {
      middle_string = string_2;
      biggest_string = string_1;
    }
  }

  cout << smallest_string << ", "
       << middle_string << ", "
       << biggest_string << "\n";
}
