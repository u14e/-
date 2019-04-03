/* 
 * 找和为K的两个元素:
 *    在一个长度为n(n < 1000)的整数序列中，判断是否存在某两个元素之和为k。
  
 * 输入: 第一行输入序列的长度n和k，用空格分开。
 *       第二行输入序列中的n个整数，用空格分开。
 *    eg. 9 10
 *        1 2 3 4 5 6 7 8 9
 * 输出: 如果存在某两个元素的和为k，则输出yes，否则输出no。
 *    eg. yes
 */
#include <iostream>
using namespace std;

int queue[1000];

int main() {
  int n, k;
  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    cin >> queue[i];
  }

  bool found = 0;
  for (int i = 0; i < n - 1; i++) {
    if (found) {
      break;
    }
    for (int j = i + 1; j < n; j++) {
      if (queue[i] + queue[j] == k) {
        cout << "yes" << endl;
        found = 1;
        break;
      }
    }
  }

  if (!found) {
    cout << "no" << endl;
  }
  
  return 0;
}