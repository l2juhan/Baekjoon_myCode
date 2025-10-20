#include <bits/stdc++.h>
using namespace std;
    //-----------------------------

    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------
    int N,L;
    deque<pair<int,int>>dq;
    cin >> N >> L;

    for (int i=0;i<N;++i) {
        int n;cin >> n;
        while (!dq.empty()&&dq.back().second>=n) {
            dq.pop_back();
        }
        dq.push_back({i,n});
        while (dq.front().first<=i-L) {
            dq.pop_front();
        }
        cout << dq.front().second << " ";


    }

    //-----------------------------
    }