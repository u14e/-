/**
 * 赋值运算符:
 *   符号位的赋值处理:
 *      - 直接赋值，不管符号位还是数字位
 *   unsigned = int 或 long
 *      - 直接赋值，符号位当作数字
 *   int = unsigned int
 *      - 直接赋值，数字当作符号位
 */
#include <iostream>
using namespace std;

int main() {
  unsigned int unsigned_int = 0xAAAAAAAA;
  cout << unsigned_int << endl;
  signed int signed_int = unsigned_int;
  cout << hex << signed_int << endl;
  cout << dec << signed_int << endl;
}
