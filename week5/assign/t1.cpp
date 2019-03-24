/* 
 * 晶晶赴约会:
 *    晶晶的朋友贝贝约晶晶下周一起去看展览，但晶晶每周的1、3、5有课必须上课，
 *    请帮晶晶判断她能否接受贝贝的邀请，如果能输出YES；如果不能则输出NO。
 */
#include <iostream>
using namespace std;

int main() {
  int day = 0;
  cin >> day;
  if (day == 1 || day == 3 || day == 5) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
  return 0;
}