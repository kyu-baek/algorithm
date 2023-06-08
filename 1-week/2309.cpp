//일곱 난쟁이

#include "../stdc++.h"
using namespace std;
int a[9]; 
int sum;

pair<int, int> ret;
void combi(){
  for (int i = 0; i < 9; i++) {
    for (int j = i + 1; j < 9; j++) {
      if ((sum - a[i] - a[j]) == 100) {
        ret.first = a[i];
        ret.second = a[j];
        return ;
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  for(int i = 0; i < 9; i++){
      cin >> a[i]; 
  }
  sort(a, a + 9);
  for(int i = 0; i < 9; i++) sum += a[i];
  combi();
  for(int i = 0; i < 9; i++) {
    if (a[i] != ret.first && a[i] != ret.second)
      cout << a[i] << "\n";
  }
}