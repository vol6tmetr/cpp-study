#include "../std_lib_facilities.h"

int main() {
  int number_of_words = 0;
  string previous_word = "";
  string current_word;
  while (cin >> current_word) {
    ++number_of_words;

    if (previous_word == current_word) {
      cout << "Repeating word: " << current_word << " after "
           << number_of_words << " words\n";
    }
    previous_word = current_word;
  }
}
