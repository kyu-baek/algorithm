//좋은 단어

/*
  좋은 단어 조건
  1. 전체 짝수
  2. 홀수끼리 1번 이상 연속되면 안됨
*/

#include "../stdc++.h"
using namespace std;

int n, result;
string str;

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> str;

    stack<char> stk;
    for (char c: str){
      if (stk.size() && stk.top() == c)
        stk.pop();
      else
        stk.push(c);
    }

    if (stk.size() == 0)
      result++;
  }
  cout << result;
}