/* 
 * 分数求和:
 *    输入n个分数并对他们求和，用约分之后的最简形式表示
 *    eg.  q/p = x1/y1 + x2/y2 +....+ xn/yn
 *    5/6已经是最简形式，3/6需要规约为1/2, 3/1需要规约成3，10/3就是最简形式
 * 输入: 
 *      第一行的输入n,代表一共有几个分数需要求和
        接下来的n行是分数
 *    eg. 2
 *        1/2
 *        1/3
 * 输出: 输出只有一行，即归约后的结果
 *    eg. 5/6
 */
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  // 存储结果(sumn/sumd)
  int sumn = 0, sumd = 1;
  while(n--){
    int num, deno;
    char slash; // 吃掉斜杠 /
    cin >> num >> slash >> deno;
    // 1. 先相加
    sumn = sumn * deno + sumd * num;
    sumd = sumd * deno;
  }
  
  // 2. 后约分
  // 2.1 求最大公约数 gcd, 这里用的是欧几里得法
  int a = sumd, b = sumn, c;
  while(a != 0){
    c = a;
    a = b % a;
    b = c;
  }
  int gcd = b;
  
  // 2.2 分子分母同时除以gcd就可以完成约分
  sumd /= gcd;
  sumn /= gcd;
  if (sumd > 1) {
    cout << sumn << '/' << sumd << endl;
  } else {
    cout << sumn << endl;
  }

  return 0;
}