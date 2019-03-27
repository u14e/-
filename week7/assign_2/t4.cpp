/* 
 * 人民币支付:
 *    从键盘输入一指定金额（以元为单位，如345），
 *    然后输出支付该金额的各种面额的人民币数量，
 *    显示100元，50元，20元，10元，5元，1元各多少张，
 *    要求尽量使用大面额的钞票。
 * 输入: 735
 * 输出: 7 0 1 1 1 0
 */
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[6] = {0, 0, 0, 0, 0, 0};

  while(n > 0){
    if (n >= 100) {
      int shang = n / 100;
      n -= shang * 100;
      a[0] += shang;
    } else if (n >= 50 && n < 100) {
      int shang = n / 50;
      n -= shang * 50;
      a[1] += shang;
    } else if (n >= 20 && n < 50) {
      int shang = n / 20;
      n -= shang * 20;
      a[2] += shang;
    } else if (n >= 10 && n < 20) {
      int shang = n / 10;
      n -= shang * 10;
      a[3] += shang;
    } else if (n >= 5 && n < 10) {
      int shang = n / 5;
      n -= shang * 5;
      a[4] += shang;
    } else if (n >= 1 && n < 5) {
      int shang = n / 1;
      n -= shang * 1;
      a[5] += shang;
    }
  }
  
  for (int i = 0; i < 6; i++) {
    cout << a[i] << endl;
  }

  return 0;
}