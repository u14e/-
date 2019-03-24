#include <iostream>
using namespace std;

int main() {
  int all[10] = {23, 34, 65, 43, 67, 12, 67, 341, 61, 34};
  int odd[10], even[10];
  int countOdd = 0;
  int countEven = 0;
  for (int i = 0; i < 10; i++) {
    if (all[i] % 2 != 0) {
      odd[countOdd] = all[i];
      countOdd++;
    } else {
      even[countEven] = all[i];
      countEven++;
    }
  }

  for (int i = 0; i < countOdd; i++) {
    cout << odd[i] << " ";
  }
  for (int i = 0; i < countEven; i++) {
    cout << even[i] << " ";
  }

  return 0;
}