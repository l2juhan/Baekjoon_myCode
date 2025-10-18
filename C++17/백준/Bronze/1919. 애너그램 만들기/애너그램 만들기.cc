#include <bits/stdc++.h>
using namespace std;
    //-----------------------------
    int alpha[26];
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    string a,b; cin>>a>>b;
    for (const char& c:a) {
        alpha[c-'a']++;
    }
    for (const char& c:b) {
        alpha[c-'a']--;
    }
    int ans=0;
    for (const int& i:alpha) {
        if (i>0)ans+=i;
        else if (i<0)ans-=i;
    }
    cout<<ans;
    //-----------------------------//
    return 0;
    }