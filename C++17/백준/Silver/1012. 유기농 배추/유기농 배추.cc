#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
    //-----------------------------
int board[51][51];
int dist[51][51];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int tc; cin>>tc;
    while (tc--) {
        int m,n,k; cin>>n>>m>>k;
        for (int i=0;i<n;++i) {
            fill(board[i],board[i]+m,0);
            fill(dist[i],dist[i]+m,0);
        }
        queue<pair<int,int>>q;
        while (k--) {
            int a,b; cin>>a>>b;
            board[a][b]=1;

        }
        int ans=0;
        for (int i=0;i<n;++i) {
            for (int j=0;j<m;++j) {
                if (dist[i][j]==0&&board[i][j]==1) {
                    ans++;
                    q.push({i,j});
                    while (!q.empty()) {
                        auto cur=q.front(); q.pop();
                        for (int d=0;d<4;d++) {
                            int x=cur.X+dx[d];
                            int y=cur.Y+dy[d];
                            if (x<0||y<0||x>=n||y>m)continue;
                            if (board[x][y]==0||dist[x][y]==1)continue;
                            dist[x][y]=1;
                            q.push({x,y});
                        }
                    }
                }
            }
        }
        cout<<ans<<'\n';
    }

    //-----------------------------//
    return 0;
    }