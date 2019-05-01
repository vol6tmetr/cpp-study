#include "../std_lib_facilities.h"

int main() {
  cout << "Write strings to compare (alphabetically): ";
  string string1;
  string string2;
  cin >> string1 >> string2;
  if (string1 == string2)
    cout << "Strings " << string1 << " and " << string2 << " are identical!\n";
  if (string1 > string2)
    cout << "String " << string1 << " is bigger than " << string2 << "\n";
  if (string2 > string1)
    cout << "String " << string2 << " is bigger than " << string1 << "\n";
}
