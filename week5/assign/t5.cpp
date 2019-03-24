/* 
 * 数组倒序
 */
#include <iostream>
using namespace std;

int a[100];

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  while (n--) {
    cout << a[n] << " ";
  }

  return 0;
}