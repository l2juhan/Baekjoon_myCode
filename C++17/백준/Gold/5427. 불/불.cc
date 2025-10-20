#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
    //-----------------------------
char board[1001][1001];
int vis[1001][1001];
int vis_f[1001][1001];

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int tc; cin>>tc;
    while (tc--) {
        int m,n; cin>>m>>n;
        for (int i=0;i<n;++i) {
            fill(board[i],board[i]+m,'-');
            fill(vis[i],vis[i]+m,-1);
            fill(vis_f[i],vis_f[i]+m,-1);
        }
        queue<pair<int,int>>qf;
        queue<pair<int,int>>q;
        bool possible=false;
        for (int i=0;i<n;++i) {
            for (int j=0;j<m;++j) {
                cin>>board[i][j];
                if (board[i][j]=='@') {
                    q.push({i,j});
                    vis[i][j]=0;
                }
                if (board[i][j]=='*') {
                    qf.push({i,j});
                    vis_f[i][j]=0;
                }
            }
        }
        while (!qf.empty()) {
            auto cur=qf.front(); qf.pop();
            for (int i=0;i<4;++i) {
                int x=cur.X+dx[i];
                int y=cur.Y+dy[i];
                if (x<0||y<0||x>=n||y>=m)continue;
                if (vis_f[x][y]>=0||board[x][y]=='#')continue;
                vis_f[x][y]=vis_f[cur.X][cur.Y]+1;
                qf.push({x,y});
            }
        }
        while (!q.empty()) {
            auto cur=q.front(); q.pop();
            for (int i=0;i<4;++i) {
                int x=cur.X+dx[i];
                int y=cur.Y+dy[i];
                if (x<0||y<0||x>=n||y>=m) {
                    possible=true;
                    cout<<vis[cur.X][cur.Y]+1<<'\n';
                    break;
                }
                if (vis[x][y]>=0||board[x][y]=='#')continue;
                if (vis_f[x][y]<=vis[cur.X][cur.Y]+1&&vis_f[x][y]!=-1)continue;
                vis[x][y]=vis[cur.X][cur.Y]+1;
                q.push({x,y});
            }
            if (possible)break;
        }
        if (!possible)cout<<"IMPOSSIBLE\n";
    }
    //-----------------------------//
    return 0;
    }