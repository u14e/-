/**
 * 一个字符型占一个字节, 最多可以表示 256 个字符
 * 由于存储类型和整型相同：
 *    - 可以与整型数据相互赋值
 *    - 可以和整数一样进行运算
 */ 
#include <iostream>
using namespace std;

int main() {
  // @ -- 64 -- 01000000
  char l = '@';
  
  char a = 64;
  int b = 'Z';
  int c = b - a;
  // char d = 6 + 256;
  cout << a << " " << b << " " << c << endl;

  // 转义字符
  cout << "This is the first line. \n";
  cout << '\a' << '\\' << '\n';

  return 0;
}
