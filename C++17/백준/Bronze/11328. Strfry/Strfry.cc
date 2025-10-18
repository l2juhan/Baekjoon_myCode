#include <bits/stdc++.h>
using namespace std;
    //-----------------------------

    int arr[2][6];
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int tc; cin>>tc;
    while (tc--) {
        string a,b; cin>>a>>b;
        string aa=a;
        string bb=b;
        sort(aa.begin(),aa.end());
        sort(bb.begin(),bb.end());
        if (aa==bb) cout << "Possible\n";
        else cout << "Impossible\n";
        
    }
    //-----------------------------//
    return 0;
    }