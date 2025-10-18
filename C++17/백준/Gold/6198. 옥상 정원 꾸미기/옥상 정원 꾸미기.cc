#include <bits/stdc++.h>
using namespace std;
    //-----------------------------
    int alpha[26];
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int n;cin>>n;
    long long ans=0;
    stack<int>s;
    while (n--) {
        int a;cin>>a;
        while (!s.empty()&&s.top()<=a)s.pop();
        ans+=s.size();
        s.push(a);
    }
    cout<<ans;

    //-----------------------------//
    return 0;
    }