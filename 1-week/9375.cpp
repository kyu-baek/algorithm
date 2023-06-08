//패션왕 신해빈 https://www.acmicpc.net/problem/9375
//경우의 수 문제.
// 경우의 수가 커질 것을 대비해서 long long을 선언하자
#include "../stdc++.h"
using namespace std;

int t, n;
string a, b;
long long ret[100];

int main() {
  cin >> t;
  int tmp = t;
  while (t--) {
    cin >> n;
    map<string, int> _map;
    for (int i = 0; i < n; i++) {
      cin >> a >> b;
      _map[b]++;
    }
    ret[t] = 1;
    for (auto c: _map) {
      ret[t] = ret[t] * ((long long)c.second + 1);
    }
    ret[t]--;
  }
  while (tmp--) {
    cout << ret[tmp] << '\n';
  }
  return 0;
}
