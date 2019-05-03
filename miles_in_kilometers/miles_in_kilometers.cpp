#include "../std_lib_facilities.h"

int main() {
  double miles = 0;

  cout << "Write distance in miles: ";
  cin >> miles;
  cout << "Distance in kilometers: " << miles * 1.609 << "\n";
}
