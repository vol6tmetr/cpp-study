#include "../std_lib_facilities.h"

int main() {
  int one_cent_coins = 0;
  int five_cents_coins = 0;
  int ten_cents_coins = 0;
  int twenty_cents_coins = 0;
  int fifty_cents_coins = 0;
  int one_dollar_coins = 0;
  int overall_amount = 0;

  cout << "How much one cent coins do you have?\n";
  cin >> one_cent_coins;

  cout << "How much five cents coins do you have?\n";
  cin >> five_cents_coins;

  cout << "How much ten cents coins do you have?\n";
  cin >> ten_cents_coins;

  cout << "How much twenty cents coins do you have?\n";
  cin >> twenty_cents_coins;

  cout << "How much fifty cents coins do you have?\n";
  cin >> fifty_cents_coins;

  cout << "How much one dollar coins do you have?\n";
  cin >> one_dollar_coins;

  overall_amount = one_cent_coins * 1 +
                  five_cents_coins * 5 +
                  ten_cents_coins * 10 +
                  twenty_cents_coins * 20 +
                  fifty_cents_coins * 50 +
                  one_dollar_coins * 100;

  cout << "You have " << one_cent_coins << " one cent coins\n"
       << "You have " << five_cents_coins << " five cents coins\n"
       << "You have " << ten_cents_coins << " ten cents coins\n"
       << "You have " << twenty_cents_coins << " twenty cents coins\n"
       << "You have " << fifty_cents_coins << " fifty cents coins\n"
       << "You have " << one_dollar_coins << " one dollar coins\n"
       << "Overall amount: " << overall_amount << " cents or "
       << overall_amount / 100 << " dollars and " << overall_amount % 100
       << " cents\n";
}
