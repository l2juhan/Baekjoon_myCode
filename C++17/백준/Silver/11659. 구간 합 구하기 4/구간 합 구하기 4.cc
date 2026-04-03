#include <bits/stdc++.h>
using namespace std;
    //-----------------------------
int arr[100001];
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
   int n,k; cin>>n>>k;
    for (int i=1;i<=n;++i) {
        cin>>arr[i];
        arr[i]=arr[i]+arr[i-1];
    }
    while (k--) {
        int i,j; cin>>i>>j;
        cout<<arr[j]-arr[i-1]<<'\n';
    }

    //-----------------------------//
    return 0;
}