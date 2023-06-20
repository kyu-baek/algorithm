#include "../stdc++.h"
using namespace std;

const int n = 10;
int visited[n];
vector<int> adj[n];

void go(int f) {
  visited[f] = 1;
  cout << f << '\n';
  for (int i = 0; i < n; i++) {
    if (visited[i]) continue;
    go(i);
  }
}

int main() {

  adj[1].push_back(2);
  adj[2].push_back(1);

  adj[1].push_back(3);
  adj[3].push_back(1);

  adj[3].push_back(4);
  adj[4].push_back(3);

  for(int i = 0; i < n; i++) {
    if (adj[i].size() && visited[i] == 0)
      go(i);
    
  }
}
