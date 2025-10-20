#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
    //-----------------------------
int board[301][301];
int vis[301][301];

int dx[8]={1,2,1,2,-1,-2,-1,-2};
int dy[8]={2,1,-2,-1,2,1,-2,-1};
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int tc; cin>>tc;
    while (tc--) {
        int n;cin>>n;
        int sx,sy; cin>>sx>>sy;
        int fx,fy; cin>>fx>>fy;
        queue<pair<int,int>>q;
        q.push({sx,sy});
        for (int i=0;i<n;i++) {
            fill(vis[i],vis[i]+n,0);
        }
        while (!q.empty()) {
            auto cur=q.front(); q.pop();
            if (cur.X==fx&&cur.Y==fy) {
                cout<<vis[fx][fy]<<'\n';
                break;
            }
            for (int i=0;i<8;++i) {
                int x=cur.X+dx[i];
                int y=cur.Y+dy[i];
                if (x<0||y<0||x>=n||y>=n)continue;
                if (vis[x][y]>0)continue;
                vis[x][y]=vis[cur.X][cur.Y]+1;
                q.push({x,y});
            }
        }
    }
    //-----------------------------//
    return 0;
    }