
#include "../stdc++.h"
using namespace std;
int cnt;
// int main() {
// int a = 0;
// int i, j;
// int N = 5;
// int cnt;
// for (i = 0; i < N; i++) {
//     for (j = N; j > i; j--) {
//         a = a + i + j;
//         cnt++;
//     }
// }
// cout << cnt;
// }

int gcd(int n, int m) {
        if (n%m ==0) return m;
        if (n < m) swap(n, m);
        while (m > 0) {
          cnt++;
            n = n%m;
            swap(n, m);
        }
        return n;
}



int fibonacci(int n) {
  cnt++;
  if (n <= 1) {
    return 1;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main (){
  gcd(100, 8);
  cout <<cnt ;
}