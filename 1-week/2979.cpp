//트럭주차 https://www.acmicpc.net/problem/2979

#include "../stdc++.h"
using namespace std;
int A, B, C, a, b;

int main() {
  map<int, int> m;

  for (int i = 0; i < 100; i++) {
    m.insert(pair<char,int>(i, 0));
  }
  cin >> A >> B >> C;
  for(int i = 0; i < 3; i++){
		cin >> a >> b; 
		for(int j = a; j < b; j++){
       m[j]++;
    }
	}
  
  int sum = 0;
  for (auto a: m) {
    
    switch (a.second)
    {
    case 1 :
      sum = sum + 1 * A;
      break;
    case 2 :
      sum = sum + B * 2;
      break;
    case 3 :
      sum = sum + C * 3;
      break;
    }
    
  }
  cout << sum<< "\n";
  return 0;
}