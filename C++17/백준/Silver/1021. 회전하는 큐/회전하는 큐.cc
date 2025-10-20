#include <bits/stdc++.h>
using namespace std;
    //-----------------------------

    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------
    int n;
    int t;
    cin >> n >> t;
    deque<int>dq;
    for (int i=1;i<=n;++i) {
        dq.push_back(i);
    }
    int cnt=0;
    while (t--) {
        int a;cin >> a;
        int idx=find(dq.begin(),dq.end(),a)-dq.begin();
        while (a!=dq.front()) {
            if (idx<dq.size()-idx) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
            else {
                dq.push_front(dq.back());
                dq.pop_back();
            }
            cnt++;
        }
        dq.pop_front();
    }
    cout << cnt;
    //-----------------------------
    }