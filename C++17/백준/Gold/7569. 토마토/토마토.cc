#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
    //-----------------------------
int board[101][101][101];
int vis[101][101][101];

int dx[6]={1,0,-1,0,0,0};
int dy[6]={0,1,0,-1,0,0};
int dz[6]={0,0,0,0,1,-1};
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int m,n,h; cin>>m>>n>>h;
    queue<tuple<int,int,int>>q;
    for (int i=0;i<h;++i) {
        for (int j=0;j<n;++j) {
            for (int k=0;k<m;++k) {
                cin>>board[j][k][i];
                if (board[j][k][i]==1)q.push({j,k,i});
                if (board[j][k][i]==0)vis[j][k][i]=-1;
            }
        }
    }
    while (!q.empty()) {
        auto cur=q.front(); q.pop();
        for (int i=0;i<6;++i) {
            int x=get<0>(cur)+dx[i];
            int y=get<1>(cur)+dy[i];
            int z=get<2>(cur)+dz[i];
            if (x<0||y<0||z<0||x>=n||y>=m||z>=h)continue;
            if (board[x][y][z]==-1||vis[x][y][z]>=0)continue;
            vis[x][y][z]=vis[get<0>(cur)][get<1>(cur)][get<2>(cur)]+1;
            q.push({x,y,z});
        }
    }
    int ans=0;
    for (int i=0;i<h;++i) {
        for (int j=0;j<n;++j) {
            for (int k=0;k<m;++k) {
                if (vis[j][k][i]==-1) {
                    cout<<-1;
                    return 0;
                }
                ans=max(ans,vis[j][k][i]);
            }
        }
    }
    cout<<ans;
    //-----------------------------//
    return 0;
    }