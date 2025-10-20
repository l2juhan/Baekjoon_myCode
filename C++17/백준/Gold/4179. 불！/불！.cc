#include <bits/stdc++.h>
using namespace std;
    //-----------------------------
char board[1001][1001];
int vis[1001][1001];
int dist[1001][1001];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int n,m; cin>>n>>m;
    for (int i = 0; i < n; ++i) {
        fill(dist[i], dist[i] + m, -1);
        fill(vis[i], vis[i] + m, -1);
    }
    queue<pair<int,int>>q1,q2;
    for (int i=0;i<n;++i) {
        for (int j=0;j<m;++j) {
            cin>>board[i][j];
            if (board[i][j]=='J'){q1.push({i,j}); vis[i][j]=1;}
            if (board[i][j]=='F'){q2.push({i,j}); dist[i][j]=1;}
        }
    }
    while (!q2.empty()) {
        auto cur=q2.front(); q2.pop();
        for (int i=0;i<4;++i) {
            int x=cur.first+dx[i];
            int y=cur.second+dy[i];
            if (x<0||y<0||x>=n||y>=m)continue;
            if (board[x][y]=='#'||dist[x][y]>=0)continue;
            dist[x][y]=dist[cur.first][cur.second]+1;
            q2.push({x,y});
        }
    }
    while (!q1.empty()) {
        auto cur=q1.front(); q1.pop();
        for (int i=0;i<4;++i) {
            int x=cur.first+dx[i];
            int y=cur.second+dy[i];
            if (x<0||y<0||x>=n||y>=m) {
                cout<<vis[cur.first][cur.second];
                return 0;
            }
            if (board[x][y]=='#'||vis[x][y]>=0)continue;
            if (dist[x][y]!=-1&&dist[x][y]<=vis[cur.first][cur.second]+1)continue;
            vis[x][y]=vis[cur.first][cur.second]+1;
            q1.push({x,y});
        }
    }
    cout<<"IMPOSSIBLE";
    //-----------------------------//
    return 0;
    }