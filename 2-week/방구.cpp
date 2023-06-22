#include "../stdc++.h"
using namespace std;


int visited[104][104];
int ma[104][104];
int n, m;
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};
int componunt;

void go(int y, int x) {
  visited[y][x] = 1;
  cout << y << " : " << x << '\n';
  for (int i = 0; i < 4; i++) {
    int ny = y + dy[i];
    int nx = x + dx[i];
    if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
    if (visited[ny][nx] == 1 || ma[ny][nx] == 0) continue;
    go(ny, nx);
  }
  return ;
}


int main() {
  cin >> n >> m;

  for (int i = 0; i < n; i++) {

      for (int j = 0; j < m; j++)
      {
        cin >> ma[i][j];
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (ma[i][j] == 1 && !visited[i][j]) {
          go(i, j);
          componunt++;
        }
      }
    }

  cout << componunt << '\n';
  return 0;
}

