#include <bits/stdc++.h>
using namespace std;
    //-----------------------------
int dp[1002];

    //-----------------------------
int main(void) {
    dp[1]=1; dp[2]=2;
    int n; cin>>n;
    if (n==1 || n==2) {
        cout << dp[n]; return 0;
    }
    for (int i=3;i<=n;++i) {
        dp[i]=(dp[i-1]+dp[i-2])%10007;
    }
    cout<<dp[n];

    //-----------------------------//
    return 0;
}