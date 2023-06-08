
#include "../../stdc++.h"
using namespace std;

int a[4] = {1, 2, 3, 4};
int n = 4, r =3;

void print(){
  for(int i = 0; i < r; i++){ 
    cout << a[i] << " ";
  }
  cout << "\n"; 
}

void permutation(int n, int r, int dep) {
  if (dep == r) {
    print();
    return ;
  }
  for (int i = dep; i < n; i++) {
    swap(a[i], a[dep]);
    permutation(n, r, dep + 1);
    swap(a[i], a[dep]);

  }
  return ;
}

int main () {
  permutation(n, r, 0);
  return 0;
}