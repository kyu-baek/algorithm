
#include "../stdc++.h"
using namespace std;

const int n = 3;
int visited[n];
vector<int> adj[n];

void dfs(int u) {
  visited[u] = 1;
  cout << u << '\n';
  for (int v : adj[u]) {
    if (visited[v] == 0)
      dfs(v);
  }
  return ;
}

int main() {
  adj[1].push_back(2);
  adj[2].push_back(1);

  adj[1].push_back(3);
  adj[3].push_back(1);

  adj[3].push_back(4);
  adj[4].push_back(3);
  dfs(1);

}