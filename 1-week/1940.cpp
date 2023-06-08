//주몽 https://www.acmicpc.net/problem/1940

#include "../stdc++.h"
using namespace std;

int n, m;
int result;
int a[15004];

int main() {

  ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] + a[j] == m)
        result++;
    }
  }
  cout << result;
  return 0;  
}