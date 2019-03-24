/* 
 * 1的个数:
 *    给定一个十进制整数N，求其对应2进制数中1的个数
 */
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int result = 0;
  while (n > 0) {
    result += n % 2;
    n /= 2;
  }

  cout << result << endl;

  return 0;
}