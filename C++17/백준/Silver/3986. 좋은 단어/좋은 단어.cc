#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc, ans = 0;
    cin >> tc;

    while (tc--) {
        string s;
        cin >> s;
        stack<char> st;

        for (char c : s) {
            if (!st.empty() && st.top() == c) {
                st.pop();  // 짝이 맞으면 제거
            } else {
                st.push(c);  // 아니면 스택에 추가
            }
        }

        if (st.empty()) ans++;  // 스택이 비었으면 좋은 단어
    }

    cout << ans << '\n';
}
