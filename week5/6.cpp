#include <iostream>
using namespace std;

int main() {
  int a[10] = {4, 2, 7, 1, 6, 9, 5, 3, 8, 3};
  int odd[10], even[10];
  int countOdd = 0;
  int countEven = 0;

  // 奇偶分组
  for (int i = 0; i < 10; i++) {
    if (a[i] % 2 != 0) {
      odd[countOdd] = a[i];
      countOdd++;
    } else {
      even[countEven] = a[i];
      countEven++;
    }
  }

  // 奇数排序
  for (int i = 0; i < countOdd - 1; i++) {
    for (int j = i + 1; j < countOdd; j++) {
      if (odd[j] > odd[i]) {
        int temp = odd[i];
        odd[i] = odd[j];
        odd[j] = temp;
      }
    }
  }
  // 偶数排序
  for (int i = 0; i < countEven - 1; i++) {
    for (int j = i + 1; j < countEven; j++) {
      if (even[j] < even[i]) {
        int temp = even[i];
        even[i] = even[j];
        even[j] = temp;
      }
    }
  }

  // 输出
  for (int i = 0; i < countOdd; i++) {
    cout << odd[i] << " ";
  }
  for (int i = 0; i < countEven; i++) {
    cout << even[i] << " ";
  }

  return 0;
}