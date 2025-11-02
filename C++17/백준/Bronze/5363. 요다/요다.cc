#include <bits/stdc++.h>

using namespace std;
    //-----------------------------

    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int tc; cin >> tc;
    cin.ignore();
    while (tc--) {
        string s; getline(cin,s);
        string end=" ";
        int idx=0;
        int n=0;
        for (int i=0;n!=3;++i) {
            if (s[i]==' ')++n;
            if (n==2) {
                ++n;
                idx=i;
            }
        }
        end+=s.substr(0,idx);
        s.erase(0,idx+1);
        s+=end;
        cout << s << "\n";
    }

    //-----------------------------//
    return 0;
    }