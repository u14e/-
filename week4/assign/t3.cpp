/* 
 * 奇偶排序(2):
 *    输入十个整数，将十个整数按升序排列输出，并且奇数在前，偶数在后。
 */
#include <iostream>
using namespace std;

int main() {
  int a[10];
  for (int i = 0; i < 10; i++) {
    cin >> a[i];
  }

  // 冒泡，不断比较相邻的两个数，如果顺序错了就交换
  for (int i = 0; i < 10 - 1; i++) {
    for (int j = 1; j < 10 - i; j++) {
      // 如果左边为偶数，右边为奇数，顺序也要交换
      bool leftIsEven = a[j - 1] % 2 == 0;
      bool rightIsEven = a[j] % 2 == 0;
      if ((leftIsEven && !rightIsEven) ||
          (leftIsEven == rightIsEven && a[j - 1] > a[j])) {
            int temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
          }
    }
  }

  // 依次输出结果
  for(int i = 0; i < 10; i++) {
    cout << a[i] << ' ';
  }
  return 0;
}