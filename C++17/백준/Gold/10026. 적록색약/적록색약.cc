#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
    //-----------------------------
char board[101][101];
int vis[101][101];
int vis2[101][101];

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int n; cin>>n;
    for (int i=0;i<n;++i) {
        for (int j=0;j<n;++j)cin>>board[i][j];
    }
    int p=0; int np=0;
    queue<pair<int,int>>q1,q2;
    for (int i=0;i<n;++i) {
        for (int j=0;j<n;++j) {
            if (vis[i][j]==0) {
                p++;
                char c=board[i][j];
                q1.push({i,j});
                while (!q1.empty()) {
                    auto cur=q1.front(); q1.pop();
                    for (int d=0;d<4;++d) {
                        int x=cur.X+dx[d];
                        int y=cur.Y+dy[d];
                        if (x<0||y<0||x>=n||y>=n)continue;
                        if (c!=board[x][y]||vis[x][y]==1)continue;
                        vis[x][y]=1;
                        q1.push({x,y});
                    }
                }
            }
        }
    }
    for (int i=0;i<n;++i) {
        for (int j=0;j<n;++j) {
            if (vis2[i][j]==0) {
                np++;
                char c=board[i][j]=='B'?'B':'R';
                q2.push({i,j});
                while (!q2.empty()) {
                    auto cur=q2.front(); q2.pop();
                    for (int d=0;d<4;++d) {
                        int x=cur.X+dx[d];
                        int y=cur.Y+dy[d];
                        if (x<0||y<0||x>=n||y>=n)continue;
                        if (c=='B') {
                            if (c!=board[x][y]||vis2[x][y]==1)continue;
                        }
                        else {
                            if ('B'==board[x][y]||vis2[x][y])continue;
                        }
                        vis2[x][y]=1;
                        q2.push({x,y});
                    }
                }
            }
        }
    }
    cout<<p<<' '<<np;
    //-----------------------------//
    return 0;
    }