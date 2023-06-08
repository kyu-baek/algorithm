//알파벳 개수

#include "../stdc++.h"
using namespace std;
string str;
int main() {
  map<char, int> m;

  for (int i = 0; i < 26; i++) {
    m.insert(pair<char,int>('a' + i, 0));
  }

  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  cin >> str;
  for (char a: str) {
    m[a]++;
  }

  //print
  for (auto i : m) {
    cout << i.second << " ";
  }
}