#include "../std_lib_facilities.h"

int main() {
  string previous = "";
  string current;

  while (cin >> current) {
    if (previous == current)
      cout << "Repeating word: " << current << "\n";
    previous = current;
  }
}
