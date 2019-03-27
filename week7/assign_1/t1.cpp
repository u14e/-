/* 
 * 约瑟夫问题:
 *    有 n 只猴子，按顺时针方向围成一圈选大王（编号从1到n）,
 *    从第 1 号开始报数，一直数到 m ，数到 m 的猴子退出圈外，
 *    剩下的猴子再接着从1开始报数。就这样，直到圈内只剩下一只猴子时，这个猴子就是猴王，
 *    编程求输入 n，m 后，输出最后猴王的编号。
 * 输入: 每行是用空格分开的两个整数，
 *       第一个是 n, 第二个是 m ( 0 < m,n <=300)。最后一行是：0 0
 *    eg. 6 2
 *        12 4
 *        8 3
 *        0 0
 * 输出: 对于每行输入数据（最后一行除外)，输出数据也是一行，即最后猴王的编号
 *    eg. 5
 *        1
 *        7
 */
#include <iostream>
using namespace std;

int succedent[300];   // 一个猴子后一位是谁
int precedent[300];   // 一个猴子前一位是谁

int main() {
  int n, m;
  while(true){
    cin >> n >> m;
    if (n == 0 && m == 0) {
      break;
    }
    
    for (int i = 0; i < n - 1; i++) {
      succedent[i] = i + 1;
      precedent[i + 1] = i;
    }
    succedent[n - 1] = 0;
    precedent[0] = n - 1;

    int current = 0;
    while (true) {
      for (int count = 0; count < m - 1; count++) {
        current = succedent[current];
      }

      int pre = precedent[current];
      int suc = succedent[current];
      succedent[pre] = suc;
      precedent[suc] = pre;
      if (pre == suc) {
        cout << pre + 1 << endl;
        break;
      }
      current = suc;
    }
  }
  
  return 0;
}