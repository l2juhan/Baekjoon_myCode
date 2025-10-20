#include <bits/stdc++.h>
using namespace std;
    //-----------------------------
string board[101];
bool vis[501][501];
int dist[101][101];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int n,m; cin>>n>>m;
    for (int i=0;i<n;++i) {
        cin>>board[i];
    }
    for (int i=0;i<n;++i) {
        fill(dist[i],dist[i]+m,-1);
    }
    queue<pair<int,int>>q;
    q.push({0,0});
    dist[0][0]=0;
    while (!q.empty()) {
        pair<int,int>cur=q.front(); q.pop();
        for (int i=0;i<4;++i) {
            int x=cur.first+dx[i];
            int y=cur.second+dy[i];
            if (x<0||y<0||x>=n||y>=m)continue;
            if (board[x][y]=='0'||dist[x][y]>=0)continue;
            dist[x][y]=dist[cur.first][cur.second]+1;
            q.push({x,y});
        }
    }
    cout << dist[n-1][m-1]+1;

    //-----------------------------//
    return 0;
    }