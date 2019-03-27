/* 
 * 找出第k大的数:
 *    用户输入N和K，然后接着输入N个正整数（无序的），
 *    程序在不对N个整数排序的情况下，找出第K大的数。
 *    注意，第K大的数意味着从大到小排在第K位的数
 * 输入: 5
 *       2
 *      32 3 12 5 89
 * 输出: 
 *    32
 */
#include <iostream>
using namespace std;

int main() {
  int N;
  int K;
  int a[100];
  cin >> N;
  cin >> K;
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }
  
  for (int i = 0; i < N; i++) {
    int count = 0;
    for (int j = 0; j < N; j++) {
      if (a[j] > a[i]) {
        count++;
      }
    }
    if (count == K - 1) {
      cout << a[i] << endl;
    }
  }

  return 0;
}