#include <bits/stdc++.h>

using namespace std;
    //-----------------------------

    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//

    string s; cin >> s;
    int tc; cin >> tc;
    int ans=0;
    while (tc--) {
        string ss; cin >> ss;
        ss+=ss;
        if (ss.find(s)!=string::npos)ans++;
    }
    cout << ans;
    //-----------------------------//
    return 0;
    }
