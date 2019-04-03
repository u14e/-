#include <iostream>
using namespace std;

int main() {
  // 闰年
  int year = 2019;
  bool ok = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
  cout << ok << endl;
  return 0;
}
