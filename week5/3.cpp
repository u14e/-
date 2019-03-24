#include <iostream>
using namespace std;

// int main() {
//   int x, y, z;
//   cout << "\t 母鸡\t\t 公鸡\t\t 小鸡" << endl;
//   for (x = 0; x <= 100; x++ ) {
//     for (y = 0; y <= 100; y++) {
//       for (z = 0; z <= 100; z++) {
//         if (x + y + z == 100 && 3 * x + 2 * y + 0.5 * z == 100) {
//           cout << "\t" << x << "\t\t" << y << "\t\t" << z << endl;
//         }
//       }
//     }
//   }
//   return 0;
// }

// 优化版
int main() {
  int x, y, z;
  cout << "\t 母鸡\t\t 公鸡\t\t 小鸡" << endl;
  for (x = 0; x <= 33; x++ ) {
    for (y = 0; y <= 50; y++) {
      z = 100 - x - y;
      if (3 * x + 2 * y + 0.5 * z == 100) {
        cout << "\t" << x << "\t\t" << y << "\t\t" << z << endl;
      }
    }
  }
  return 0;
}