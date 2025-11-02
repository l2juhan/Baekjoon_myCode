#include <bits/stdc++.h>

using namespace std;
    //-----------------------------

    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int tc; cin >> tc;
    double n; string s;
    while (tc--) {
        cin >> n >> s;
        cout << fixed;
        cout.precision(4);
        if (s=="kg") cout << n*(2.2046) << " lb\n";
        else if (s=="lb") cout << n*(0.4536) << " kg\n";
        else if (s=="l") cout << n*(0.2642) << " g\n";
        else cout << n*(3.7854) << " l\n";
    }

    //-----------------------------//
    return 0;
    }