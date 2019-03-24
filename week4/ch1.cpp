#include <iostream>
using namespace std;
int main() {
  int a = 0, b = 0, result = 0;
  cout << "Please input two numbers:";
  cin >> a >> b;  // 2个数中间是空格
  result = 3 * a - 2 * b + 1;
  cout << "result is: " << result << endl;
  return 0;
}