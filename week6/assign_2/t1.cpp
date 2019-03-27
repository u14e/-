/* 
 * 苹果和虫子:
 *    你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。
 *    虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，
 *    那么经过y小时你还有多少个完整的苹果？
 * 输入: 输入仅一行，包括n，x和y（均为整数）  eg. 10 4 9
 * 输出: 输出也仅一行，剩下的苹果个数         eg. 7
 */
#include <iostream>
using namespace std;

int main() {
  int n, x, y, rest;
  cin >> n >> x >> y;
  int quotient = y / x;
  int remainder = y % x;
  if (quotient >= n) {
    rest = 0;
  } else {
    if (remainder == 0) {
      rest = n - quotient;
    } else {
      rest = n - quotient - 1;
    }
  }
  
  cout << rest << endl;
  return 0;
}