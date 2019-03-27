/**
 * 布尔型：
 *    - 占一个字节
 *    - 其值只能为 1 或 0 (1 代表 True, 0 代表 False)
 *    - 可以和整数一样进行运算
 * 赋值布尔型变量的值
 *    - 赋 0 存 0， 表示 False
 *    - 赋 非零 存 1， 表示 True
 */ 
#include <iostream>
using namespace std;

int main() {
  bool b1 = true, b2 = false;
  cout << "b1 = true, b1 =" << b1 << endl;
  cout << "b2 = false, b2 =" << b2 << endl;
  b1 = 7 > 3;
  b2 = -100;
  cout << "b1 = 7 > 3, b1 =" << b1 << endl;
  cout << "b2 = -100, b2 =" << b2 << endl;
  return 0;
}