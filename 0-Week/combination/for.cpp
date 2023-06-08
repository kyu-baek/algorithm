
#include "../../stdc++.h"
using namespace std;

int a[4] = {1, 2, 3, 4};
int n = 4, r =3;
// r의 개수만큼 중첩 for문을 만들어준다. r이 커질 수록 for문보다는 재귀를 사용하게 된다.  
int main() {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        cout << i << " " << j << " " << k << "\n";
      }
    }
  }
}