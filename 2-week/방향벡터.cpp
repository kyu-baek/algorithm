#include "../stdc++.h"
using namespace std;

const int n = 3;
int a[n][n], visited[n][n];
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};


void go(int y, int x) {
  visited[y][x] = 1;
  cout << y << " : " << x << '\n';
  for (int i = 0; i < 4; i++) {
    int ny = y + dy[i];
    int nx = x + dx[i];
    if (ny < 0 || ny >= n || nx < 0 || nx >= n) continue;
    if (visited[ny][nx] == 1 || a[ny][nx] == 0) continue;
    go(ny, nx);
  }
  return ;
}

int main(){

  //단순히 위, 오른쪽, 아래, 왼쪽으로 한칸씩만 움직이는 방향벡터
  int y = 0, x= 0;
  for (int i = 0; i < 4; i++) {
    int ny = y + dy[i];
    int nx = x + dx[i];

    cout << ny << " : " << nx << '\n';
  }

  // 3 * 3 맵에서 1은 갈 수 있는 칸, 0은 갈 수 없는칸, 
  // 4방향을 기준으로 한 칸씩 탐색하며, 재방문 하지 않고 방문한 좌표를 출력.
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; i++)
      {
        cin >> a[i][j];
      }
    }
    go(0, 0);
      


}

