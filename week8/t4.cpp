/**
 * 算术运算符:
 *   整数运算，结果仍为整数: 5/3 的结果是 1，小数部分被忽略
 *   实数运算，结果为 double 型: 5.3/3 或 5/3.0 的结果为 double 型
 * 
 * 计算过程中的类型转换:
 *    double <- float
 *     ^
 *     |
 *    long <- unsinged <- int <- char, short

 * 推算表达式最后的数据类型:
 * short s; int i; float f; double d; unsinged u
 *  123%s + (i+'@') + i*u - f/d
 *   int  +  int    + unsinged - double
 *      int         + unsinged - double
 *            unsinged         - double
 *                    double
 */
#include <iostream>
using namespace std;

int main() {
  return 0;
}
