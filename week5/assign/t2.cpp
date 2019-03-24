/* 
 * 奇数求和:
 *    计算正整数 m 到 n（包括m 和 n ）之间的所有奇数的和，
 *    其中，m 不大于 n，且n 不大于300。
 *    例如 m=3, n=12, 其和则为：3+5+7+9+11=35
 */
#include <iostream>
using namespace std;

int main() {
  int m, n, result = 0;
  cin >> m >> n;
  
  while(m <= n){
    if (m % 2 != 0) {
      result += m;
    }
    m++;
  }
  
  cout << result << endl;

  return 0;
}