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
    stack<pair<int,int>>s;
    long long ans=0;
    while (n--) {
        int a; cin>>a;
        int same=1;
        while (!s.empty()&&s.top().first<a){ans+=s.top().second;s.pop();}
        if (!s.empty()&&s.top().first==a) {
            ans+=s.top().second;
            if (s.size()>1)ans++;
            same+=s.top().second;
            s.pop();
        }
        else if (!s.empty()&&s.top().first>a) {
            ans++;
        }
        s.push({a,same});
    }

    cout<<ans;

    //-----------------------------//
    return 0;
    }