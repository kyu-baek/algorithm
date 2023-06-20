#include "../stdc++.h"
using namespace std;

const int n = 10;
int visited[n];
  int v[10][10] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 1, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  };

void go(int f) {
  visited[f] = 1;
  cout << f << '\n';
  for (int i = 0; i < n; i++) {
    if (visited[i]) continue;
    if (v[f][i]) go(i);
  }
}

int main() {

  for(int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (v[i][j] && visited[i] == 0)
        go(i);
    }
  }
}