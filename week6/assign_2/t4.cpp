/* 
 * 最大奇数与最小偶数之差的绝对值:
 *    输入6个正整数，且这6个正整数中至少存在一个奇数和一个偶数。
 *    设这6个正整数中最大的奇数为a，最小的偶数为b，求出|a-b|的值
 * 
 * 输入: 输入为一行，6个正整数,且6个正整数都小于100
 *      第二行是这n个学生的成绩，相邻两个数之间用单个空格隔开。所有成绩均为0到100之间的整数。
 *      eg. 1 2 3 4 5 6
 * 输出: 输出为一行，输出最大的奇数与最小的偶数之差的绝对值   eg. 3
 */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a[6];
  for (int i = 0; i < 6; i++) {
    cin >> a[i];
  }

  // 奇偶分组
  int odd[6];
  int even[6];
  int oddIndex = 0, evenIndex = 0;
  for (int i = 0; i < 6; i++) {
    if (a[i] % 2 == 0) {
      even[evenIndex] = a[i];
      evenIndex++;
    } else {
      odd[oddIndex] = a[i];
      oddIndex++;
    }
  }
  
  // 排序(从大到小)
  for (int i = 0; i < oddIndex - 1; i++) {
    for (int j = 0; j < oddIndex - 1 - i; j++) {
      if (odd[j+1] > odd[j]) {
        int tmp = odd[j];
        odd[j] = odd[j+1];
        odd[j+1] = tmp;
      }
    }
  }
  
  for (int i = 0; i < evenIndex - 1; i++) {
    for (int j = 0; j < evenIndex - 1 - i; j++) {
      if (even[j+1] > even[j]) {
        int tmp = even[j];
        even[j] = even[j+1];
        even[j+1] = tmp;
      }
    }
  }

  int diff = odd[0] - even[evenIndex-1];
  if (diff < 0) {
    diff = -diff;
  }

  cout << diff << endl;

  return 0;
}