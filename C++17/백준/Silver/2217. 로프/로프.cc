#include <bits/stdc++.h>
using namespace std;
    //-----------------------------

    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int n; cin>>n;
    int r[100001];
    for (int i=1;i<=n;++i) cin>>r[i];
    sort(r+1,r+n+1);
    int ans=0;
    for (int i=0;i<=n;++i) {
        ans=max(ans,r[n-i]*(i+1));
    }
    cout<<ans;
    //-----------------------------//
    return 0;
}