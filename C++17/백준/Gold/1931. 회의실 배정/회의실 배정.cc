#include <bits/stdc++.h>
using namespace std;
    //-----------------------------

    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int n; cin>>n;
    pair<int,int> p[100001];
    for (int i=0;i<n;++i) cin>>p[i].second>>p[i].first;
    sort(p,p+n);
    int ans=0; int time=0;
    for (int i=0;i<n;++i) {
        if (time>p[i].second)continue;
        time=p[i].first;
        ans++;
    }
    cout<<ans;
    //-----------------------------//
    return 0;
}