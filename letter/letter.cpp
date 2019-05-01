#include "../std_lib_facilities.h"

int main() {
  string destination_name = "";
  cout << "Write destination name: ";
  cin >> destination_name;
  cout << "Dear " << destination_name << ",\n"
       << "How are you?\nI'm fine, miss you.\n";

  cout << "Write name of your friend: ";
  string friend_name = "";
  cin >> friend_name;
  cout << "How long ago have you met " << friend_name << "?\n";

  cout << "Type m or f if your friend sex is male or female: ";
  char friend_sex = ' ';
  cin >> friend_sex;
  if (friend_sex == 'm') {
    cout << "If you will meet " << friend_name << ", tell him to call me.\n";
  }
  if (friend_sex == 'f') {
    cout << "If you will meet " << friend_name << ", tell her to call me.\n";
  }

  cout << "Type age of your friend: ";
  int friend_age = 0;
  cin >> friend_age;
  if (friend_age < 0 || friend_age > 110) {
    simple_error("You must be kidding!");
  }
  cout << "I heard that you just have celebrated your birthday. You are "
       << friend_age << " years old!\n";
  if (friend_age < 12) {
    cout <<  "Next year you will be " << friend_age + 1 << " years old!\n";
  }
  if (friend_age == 17) {
    cout << "Next year you will be able to vote!\n";
  }
  if (friend_age > 70) {
    cout << "Hope you are doing well on your pension.\n";
  }
  cout << "Sincerely yours,\n" << "Vol6tmetr\n";
}
