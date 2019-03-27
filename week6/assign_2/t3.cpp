/* 
 * 最高的分数:
 *    统计考试中取得的最高分数
 * 输入: 输入两行，第一行为整数n（1 <= n < 100），表示参加这次考试的人数.
 *      第二行是这n个学生的成绩，相邻两个数之间用单个空格隔开。所有成绩均为0到100之间的整数。
 *      eg. 5
 *          85 78 90 99 60
 * 输出: 最高的成绩         eg. 99
 */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  int a[100];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int maxGrade = a[0];
  for (int i = 0; i < n; i++) {
    if (a[i] > maxGrade) {
      maxGrade = a[i];
    }
  }

  cout << maxGrade << endl;

  return 0;
}