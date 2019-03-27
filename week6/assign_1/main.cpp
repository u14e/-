#include <iostream>
using namespace std;

int main() {
  int n;        // 细胞数量
  int id[100];  // 细菌的编号
  double rate[100]; // 细菌的繁殖率

  cin >> n;
  for(int i = 0; i < n; i++)
  {
    int initial, final;
    cin >> id[i] >> initial >> final;
    rate[i] = (double)final / initial;
  }

  // 排序(从大到小)
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (rate[j + 1] > rate[j]) {
        int tmpId = id[j];
        id[j] = id[j+1];
        id[j+1] = tmpId;
        double tmpRate = rate[j];
        rate[j] = rate[j+1];
        rate[j+1] = tmpRate;
      }
    }
  }
  
  // 记录最大的差
  double maxDiff = 0;
  int maxDiffIndex = 0;
  for (int i = 0; i < n - 1; i++) {
    double diff = rate[i] - rate[i+1];
    if (maxDiff < diff) {
      maxDiff = diff;
      maxDiffIndex = i;
    }
  }

  // 输出繁殖率较大的那组细菌
  cout << maxDiffIndex + 1 << ": ";
  for (int i = maxDiffIndex; i >= 0; i--) {
    cout << id[i] << " ";
  }
  cout << endl;

  // 输出繁殖率较小的那组细菌
  cout << n - (maxDiffIndex + 1) << ": ";
  for (int i = n - 1; i >= maxDiffIndex + 1; i--) {
    cout << id[i] << " ";
  }

  return 0;
}