#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
    //-----------------------------

int n,s;
int arr[30];
int ans;

void func(int cur,int tot) {
    if (cur==n) {
        if (tot==s)ans++;
        return;
    }
    func(cur+1,tot);
    func(cur+1,tot+arr[cur]);
}

    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    cin>>n>>s;
    for (int i=0;i<n;++i) {
        cin>>arr[i];
    }
    func(0,0);
    if (s==0) {
        cout<<ans-1;
    }
    else {
        cout<<ans;
    }
    //-----------------------------//
    return 0;
    }