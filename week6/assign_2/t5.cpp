/* 
 * 分离整数的各个数位:
 *    从键盘输入一个任意的三位整数，要求正确地分离出它的百位、十位和个位数，
 *    并分别在屏幕上输出，输出采用每行输出一个数的方式，不带其它符号。
 * 
 * 输入: 一个任意的三位整数
 *      eg. 123
 * 输出: 一个任意的三位整数   eg. 1 2 3
 */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;
  int rest = n;
  int a = rest / 100;
  rest = rest - a * 100;
  int b = rest / 10;
  rest = rest - b * 10;
  int c = rest;

  cout << a << " " << b << " " << c << endl;

  return 0;
}