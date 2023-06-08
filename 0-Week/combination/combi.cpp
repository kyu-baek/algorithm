
#include "../../stdc++.h"
using namespace std;

int a[4] = {1, 2, 3, 4};
int n = 4, r =3;

void print(vector<int> b){
  for(int i : b)cout << i << " ";
  cout << '\n'; 
}

void combi (int start, vector<int> v) {
  if (v.size() == r) {
    print(v);
    return ;
  }
  for (int i = start + 1; i < n; i++) {
    v.push_back(a[i]);
    combi(i, v);
    v.pop_back();
  }
  return ;
}

int main() {
  vector<int> v;
  combi(-1, v);
  return 0;  
}