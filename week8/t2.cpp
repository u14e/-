/**
 * 赋值运算符:
 *   长数赋值给短数:
 *      - 截取长数的低 n 位送给短数
 *      - 不管 = 右边的操作数是什么类型，都要转换为 = 左边的类型
 *   短数赋值给长数:
 *      - 原来是什么数，现在还是什么数
 */
#include <iostream>
using namespace std;

int main() {
  char char_a;        // 8位
  int int_i = 0x361;  // 32位
  cout << hex << int_i << endl; // 361
  char_a = int_i;     // 截取低8位: 01100001
  cout << char_a << endl;       // a

  return 0;
}
