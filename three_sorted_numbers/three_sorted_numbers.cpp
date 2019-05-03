#include "../std_lib_facilities.h"

int main() {
  cout << "Write 3 numbers: ";

  int number_1 = 0;
  int number_2 = 0;
  int number_3 = 0;

  cin >> number_1 >> number_2 >> number_3;

  int smallest_number = 0;
  int middle_number = 0;
  int biggest_number = 0;

  if (number_1 <= number_2 && number_1 <= number_3) {
    smallest_number = number_1;
    if (number_2 <= number_3) {
      middle_number = number_2;
      biggest_number = number_3;
    } else {
      middle_number = number_3;
      biggest_number = number_2;
    }
  } else if (number_2 <= number_1 && number_2 <= number_3) {
    smallest_number = number_2;
    if (number_1 <= number_3) {
      middle_number = number_1;
      biggest_number = number_3;
    } else {
      middle_number = number_3;
      biggest_number = number_1;
    }
  } else {
    smallest_number = number_3;
    if (number_1 <= number_2) {
      middle_number = number_1;
      biggest_number = number_2;
    } else {
      biggest_number = number_1;
      middle_number = number_2;
    }
  }

  cout << smallest_number << ", "
       << middle_number << ", "
       << biggest_number << "\n";
}
