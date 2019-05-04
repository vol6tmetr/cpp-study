#include "../std_lib_facilities.h"

int main() {
  cout << "Print operand and two numbers to modify: ";

  string operand = "";
  double number_1 = 0;
  double number_2 = 0;
  double result = 0;

  cin >> operand >> number_1 >> number_2;

  if (operand == "+" || operand == "plus") {
    result = number_1 + number_2;
  } else if (operand == "-" || operand == "minus") {
    result = number_1 - number_2;
  } else if (operand == "*" || operand == "mul") {
    result = number_1 * number_2;
  } else if (operand == "/" || operand == "div") {
    result = number_1 / number_2;
  }

  cout << "Result of " << number_1 << " "
       << operand << " " << number_2
       << " is " << result << "\n";
}
