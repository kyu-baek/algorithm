//팰린드롬 만들기 https://www.acmicpc.net/problem/1213

#include "../stdc++.h"
using namespace std;

string str, ret;
int a[30];
char m;
char s[51];

int main () {
  cin >> str;
  for (char c: str) a[c - 65]++;
  for (int i = 25; i > -1; i--) {
    if (a[i]) {
      if (a[i] %2 == 1) {
        if (m != 0) {
          cout << "I'm Sorry Hansoo\n";
          return 0;
        }
        m = i + 65;
        a[i]--;
      }
      for (int j = 0; j < a[i]; j += 2) {
        ret = char(i + 65) + ret;
        ret += char(i + 65);
      }
    }
  }
  
  if(m)ret.insert(ret.begin() + ret.size() / 2, m);
  cout << ret << "\n"; 

}