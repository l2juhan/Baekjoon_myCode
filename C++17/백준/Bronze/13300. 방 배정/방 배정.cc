#include <bits/stdc++.h>
using namespace std;
    //-----------------------------

    int arr[2][6];
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int n,k; cin>>n>>k;
    while (n--) {
        int a,b; cin>>a>>b;
        if (a==0) {
            arr[0][b-1]++;
        }
        else {
            arr[1][b-1]++;
        }
    }
    int ans=0;
    for (int i=0;i<6;++i) {
        for (int j=0;j<2;++j) {
            int m=arr[j][i];
            if (m%k==0)ans+=m/k;
            else ans+=m/k+1;
        }
    }
    cout<<ans;
    //-----------------------------//
    return 0;
    }