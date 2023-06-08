//곱셈

/*
  곱셈을 지속할 수록 수가 커지기 때문에,
  모듈로 연산을 미리 할 수 있게 해서 long long타입에 수를 담을 수 있게 한다.
  모듈로 연산 공식

  (a + b) % c = (a % c + b % c) % c 
  그리고 
  (a * b) % c = (a % c * b % c) % c

  
*/

#include "../stdc++.h"
using namespace std;

long long a, b, c;

long long go(long long a, long long b) {
  if (b == 1)
    return a % c;
  long long ret = go(a, b/2);
  ret = (ret * ret) % c;
  if (b % 2)
    ret = (ret * a) % c;
  return ret;
}

int main() {
  cin >> a >> b >> c;
  cout << go(a, b) <<  "\n";
  return 0;
}