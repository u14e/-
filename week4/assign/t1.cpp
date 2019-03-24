/* 
 * 冒泡排序
 */
#include <iostream>
using namespace std;

int main() {
  int n, a[1000];
  cin >> n;
  for (int i = 0; i < n; i++) {
	  cin >> a[i];
  }

  for (int i = 0; i < n - 1; i++) {
	  for (int j = 1; j < n - i; j++) {
		  if (a[j - 1] > a[j]) {
			  int temp = a[j];
			  a[j] = a[j - 1];
			  a[j - 1] = temp;
		  }
	  }
  }

  // 依次输出结果
  for (int i = 0; i < n; i++) {
	  cout << a[i] << ' ';
  }
  return 0;
}