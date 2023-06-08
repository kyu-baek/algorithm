//팰린드롬인지 확인하기 https://www.acmicpc.net/problem/10988

#include "../stdc++.h"
using namespace std;
string str;

int main () {
  cin >> str;
  int len = str.length();
  for (int i = 0; i < len /2; i++) {
    if (str[i] != str[len - 1 - i]) {
      cout << 0;
      return 0;
    }
  }
  cout << 1;
  return 0;
}

  
string s, temp; 
int main2(){
    cin >> s; 
    temp = s; 
    reverse(temp.begin(), temp.end()); 
    if(temp == s) cout << 1 << "\n"; 
    else cout << 0 << "\n"; 
      
    return 0; 
}