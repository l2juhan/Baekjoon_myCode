#include <bits/stdc++.h>
using namespace std;
    //-----------------------------
int dist[100001];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int n,k; cin>>n>>k;
    fill(dist,dist+100001,-1);
    queue<int>q;
    q.push(n);
    dist[n]=0;

    while (!q.empty()) {
        int cur=q.front(); q.pop();
        if (cur==k) {
            cout<<dist[cur]; return 0;
        }
        int next[3]={cur-1,cur+1,cur*2};
        for (int i:next) {
            if (i>=0&&i<100001&&dist[i]==-1) {
                dist[i]=dist[cur]+1;
                q.push(i);
            }
        }
    }

    //-----------------------------//
    return 0;
    }