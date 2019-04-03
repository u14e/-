/**
 * 赋值运算符:
 *   两边类型不同时：
 *      - 若 = 两边的类型不一致，赋值时要进行类型转换
 *      - 不管 = 右边的操作数是什么类型，都要转换为 = 左边的类型
 */
#include <iostream>
using namespace std;

int main() {
  int int_i = 64.12345;   // 64
  char char_i = int_i;    // '@'
  float float_i = char_i; // 64.0000
  bool bool_i = float_i;  // 1

  cout << showpoint << endl;
  cout << int_i << endl;
  cout << char_i << endl;
  cout << float_i << endl;
  cout << bool_i << endl;

  return 0;
}
