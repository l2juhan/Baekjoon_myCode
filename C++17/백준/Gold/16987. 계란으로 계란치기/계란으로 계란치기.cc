#include <bits/stdc++.h>
using namespace std;

    //-----------------------------
int N;
vector<pair<int,int>>v;
int ans;
void func(int k,vector<pair<int,int>> vv) {
    if (k==N) {
        int cnt=0;
        for (int i=0;i<N;++i) {
            if (v[i].first<=0)cnt++;
        }
        ans=max(cnt,ans);
        return;
    }
    for (int i=0;i<N;++i) {
        if (v[k].first<=0) {
            func(k+1,v);
        }
        else if (k!=i&&v[i].first>0) {
            v[k].first-=v[i].second;
            v[i].first-=v[k].second;
            func(k+1,v);
            v[k].first+=v[i].second;
            v[i].first+=v[k].second;
        }
        else if (i==N-1) {
            func(k+1,v);
        }
    }
}
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    cin>>N;
    for (int i=0;i<N;++i) {
        int a,b; cin>>a>>b; //a=내구도,b=무게
        v.push_back({a,b});
    }
    func(0,v);
    cout<<ans;
    //-----------------------------//
    return 0;
    }