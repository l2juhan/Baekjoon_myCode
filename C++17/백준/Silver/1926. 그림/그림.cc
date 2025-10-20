#include <bits/stdc++.h>
using namespace std;
    //-----------------------------
int board[501][501];
bool vis[501][501];
int nx[4]={1,0,-1,0};
int ny[4]={0,1,0,-1};
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int n,m; cin>>n>>m;
    for (int i=0;i<n;++i) {
        for (int j=0;j<m;++j) {
            cin>>board[i][j];
        }
    }
    int num=0; int mx=0;
    for (int i=0;i<n;++i) {
        for (int j=0;j<m;++j) {
            if (board[i][j]==0||vis[i][j]==1)continue;
            num++;
            queue<pair<int,int>>q;
            vis[i][j]=1;
            q.push({i,j});
            int area=0;
            while (!q.empty()) {
                area++;
                pair<int,int>cur=q.front(); q.pop();
                for (int d=0;d<4;++d) {
                    int dx=cur.first+nx[d];
                    int dy=cur.second+ny[d];
                    if (dx<0 || dx >=n || dy<0 || dy>=m)continue;
                    if (vis[dx][dy]==1 || board[dx][dy]==0)continue;
                    vis[dx][dy]=1;
                    q.push({dx,dy});
                }
            }
            mx=max(mx,area);
        }
    }
    cout<<num<<'\n'<<mx;
    //-----------------------------//
    return 0;
    }