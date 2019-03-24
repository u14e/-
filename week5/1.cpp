#include <iostream>
using namespace std;

int main() {
  int blockCount = 0;
  int i, N = 0;
  // 1. 输入
  cin >> N;
  // 2. 初始值设定
  blockCount = 1;
  // 3. 循环实现累加
  for (i = 1; i <= N; i++) {
    blockCount += i;
  }
  // 4. 输出
  cout << "最多可切" << blockCount << "块" << endl;
  return 0;
}