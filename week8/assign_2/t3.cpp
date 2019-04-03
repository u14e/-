/* 
 * 买房子:
 *    某程序员开始工作，年薪N万，他希望在中关村公馆买一套60平米的房子，
 *    现在价格是200万，假设房子价格以每年百分之K增长，并且该程序员未来年薪不变，
 *    且不吃不喝，不用交税，每年所得N万全都积攒起来，
 *    问第几年能够买下这套房子（第一年房价200万，收入N万）。
 *    程序员每年先拿工资，再尝试买房，然后房子才涨价。
  
 * 输入: 有多行，每行两个整数 N（10 <= N <= 50）, K（1 <= K <= 20）
 *    eg. 50 10
 *        40 10
 *        40 8
 * 输出: 针对每组数据，如果在第20年或者之前就能买下这套房子，
 *       则输出一个整数M，表示最早需要在第M年能买下，
 *       否则输出Impossible，
 *    eg. 8
 *        Impossible
 *        10
 */
#include <iostream>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  int house_price = 200;
  int total_incoming = N;
  bool bought = 0;
  for (int i = 1; i <= 20; i++) {
    if (total_incoming >= house_price) {
      cout << i << endl;
      bought = 1;
      break;
    }
    total_incoming += N;
    house_price += (house_price * K)/100;
  }

  if (!bought) {
    cout << "Impossible" << endl;
  }
  
  return 0;
}