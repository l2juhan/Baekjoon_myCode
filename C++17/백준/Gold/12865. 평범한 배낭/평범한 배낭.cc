#include <bits/stdc++.h>
using namespace std;
    //-----------------------------
int dp[101][100001];
int W[101];
int V[101];
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int n,k; cin>>n>>k;
    for (int i=1;i<=n;++i) cin >> W[i] >> V[i];
    for (int i=1;i<=n;++i) {
        for (int w=0;w<=k;++w) {
            dp[i][w]=dp[i-1][w];
            if (w>=W[i]) dp[i][w]=max(dp[i][w],dp[i-1][w-W[i]]+V[i]);
        }
    }
    cout<<dp[n][k];
    //-----------------------------//
    return 0;
}