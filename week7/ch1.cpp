#include <iostream>
using namespace std;

int main() {
  // sizeof 用于计算某种类型的对象在内存中所占的字节数
  cout << "sizeof(short int)=" << sizeof(short int) << endl;  // 2 个字节
  cout << "sizeof(int)=" << sizeof(int) << endl;              // 4 个字节
  cout << "sizeof(long int)=" << sizeof(long int) << endl;    // 4 个字节

  // 打印一个数的十六进制表示(从而观察到二进制表示)
  int a = -123;
  cout << hex << a << endl;
  // 八进制
  cout << oct << a << endl;
  // 十进制
  cout << dec << a << endl;

  // 把一个十六进制数输入程序
  int b = 0x7FFFFF85;
  cout << dec << b << endl;
  cout << oct << b << endl;

  // 最大值
  unsigned int max_i = 0xFFFFFFFF;
  cout << dec << max_i << endl;

  int max_ui = 0x7FFFFFFF;
  cout << dec << max_ui << endl;

  // 最小值
  int min = 0x7FFFFFFF;
  cout << dec << min + 1 << endl;

  return 0;
}