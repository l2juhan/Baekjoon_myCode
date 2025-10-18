#include <bits/stdc++.h>
using namespace std;
    //-----------------------------
    int alpha[26];
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    while (true) {
        int n; cin>>n;
        if (n==0)return 0;
        stack<int>s;
        long long ans=0;
        vector<long long>v(n);
        for (int i=0;i<n;++i) cin>>v[i];
        for (int i=0;i<n;++i) {
            while (!s.empty()&&v[s.top()]>=v[i]) {
                long long h=v[s.top()];
                s.pop();
                long long w=i;
                if (!s.empty())w=i-s.top()-1;
                ans=max(ans,h*w);
            }
            s.push(i);
        }
        while (!s.empty()) {
            long long h=v[s.top()];
            s.pop();
            long long w=n;
            if (!s.empty())w=n-s.top()-1;
            ans=max(ans,h*w);
        }
        cout<<ans<<'\n';
    }
    //-----------------------------//
    return 0;
    }