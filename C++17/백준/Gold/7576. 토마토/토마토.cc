#include <bits/stdc++.h>
using namespace std;
    //-----------------------------
int board[1001][1001];
int vis[1001][1001];
int dist[1001][1001];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int n,m; cin>>m>>n;
    queue<pair<int,int>>q;
    for (int i=0;i<n;++i) {
        for (int j=0;j<m;++j) {
            int a;cin>>a;
            board[i][j]=a;
            if (a==1) {
                q.push({i,j});
            }
            if (a==0) {
                dist[i][j]=-1;
            }
        }
    }
    while (!q.empty()) {
        auto cur=q.front(); q.pop();
        for (int i=0;i<4;++i) {
            int x=cur.first+dx[i];
            int y=cur.second+dy[i];
            if (x<0||y<0||x>=n||y>=m)continue;
            if (dist[x][y]>=0)continue;
            dist[x][y]=dist[cur.first][cur.second]+1;
            q.push({x,y});
        }
    }
    int ans=0;
    for (int i=0;i<n;++i) {
        for (int j=0;j<m;++j) {
            if (dist[i][j]==-1) {
                cout << -1;
                return 0;
            }
            ans=max(ans,dist[i][j]);
        }
    }
    cout << ans;



    //-----------------------------//
    return 0;
    }