#include <iostream>
using namespace std;

int main() {
  int nCases, i, nFeet;
  // 1. 输入测试数据组数
  cin >> nCases;
  // 2. 循环
  for (i = 0; i < nCases; i++) {
    cin >> nFeet;
    // 3. 分支
    if (nFeet % 2 != 0) {
      cout << "0 0" << endl;
    } else if (nFeet % 4 != 0) {
      cout << nFeet / 4 + 1 << " " << nFeet / 2 << endl;
    } else {
      cout << nFeet / 4 << " " << nFeet / 2 << endl;
    }
  }
  return 0;
}