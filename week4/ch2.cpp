#include <iostream>
using namespace std;
int main() {
  int x = 0, y = 0;
  cin >> x >> y;  // 2个数中间是空格
  if (x > y)
    cout << "Max number is:" << x << endl;
  else
    cout << "Max number is:" << y << endl;
  return 0;
}