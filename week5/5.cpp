#include <iostream>
using namespace std;

int main() {
  int a[10] = {4, 2, 7, 1, 6, 9, 5, 3, 8, 3};
  
  for (int i = 0; i < 9; i++) {
    for (int j = i + 1; j < 10; j++) {
      if (a[j] > a[i]) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }

  for (int i = 0; i < 10; i++) {
    cout << a[i] << " ";
  }

  return 0;
}