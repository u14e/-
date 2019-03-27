/* 
 * 年龄与疾病:
 *    某医院想统计一下某项疾病的获得与否与年龄是否有关，
 *    需要对以前的诊断记录进行整理。
 * 输入: 共2行，第一行为过往病人的数目n（0 < n <= 100)，
 *      第二行为每个病人患病时的年龄。
 *    eg. 10
 *        1 11 21 31 41 51 61 71 81 91
 * 输出: 每个年龄段（分四段：18以下，19-35，36-60，大于60注意看样例输出的格式）的患病人数占总患病人数的比例，
 *      以百分比的形式输出，精确到小数点后两位（double）
 *    eg. 1-18: 20.00%
          19-35: 20.00%
          36-60: 20.00%
          60-: 40.00%
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n;
  int val;
  int a = 0, b = 0, c = 0, d = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> val;
    if (val >= 1 && val <= 18) {
      a++;
    } else if (val >= 19 && val <= 35) {
      b++;
    } else if (val >= 36 && val <= 60) {
      c++;
    } else {
      d++;
    }
  }

  cout << fixed << "1-18:" << setprecision(2) << ((double)a / n) * 100 << '%' << endl;
  cout << fixed << "19-35:" << setprecision(2) << ((double)b / n) * 100 << '%' << endl;
  cout << fixed << "36-60:" << setprecision(2) << ((double)c / n) * 100 << '%' << endl;
  cout << fixed << "60-:" << setprecision(2) << ((double)d / n) * 100 << '%' << endl;

  return 0;
}