//ROT13 https://www.acmicpc.net/problem/11655

#include "../stdc++.h"
using namespace std;
string s;

int main() {
  getline(cin, s);
  for (int i = 0; i < s.length(); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      if (s[i] > 'M') {
        s[i] = s[i] - 26;
      }
      s[i] = s[i] + 13;
    } else if (s[i] >= 'a' && s[i] <= 'z') {
      if (s[i] > 'm') {
        s[i] = s[i] - 26;
      }
      s[i] = s[i] + 13;
    }
  }
  cout << s << "\n";
}