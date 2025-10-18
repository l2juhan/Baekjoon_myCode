#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  while (n--) {
    string a;
    cin >> a;
    stack<char> s;
    bool is_valid = true;
    for (auto c : a) {
      if (c == '(')
        s.push(c);
      else { // c == ')'
        if (s.empty() || s.top() != '(') {
          is_valid = false;
          break;
        }
        s.pop();
      }
    }
    if (!s.empty()) is_valid = false;
    
    if (is_valid) cout << "YES\n";
    else cout << "NO\n";
  }
}