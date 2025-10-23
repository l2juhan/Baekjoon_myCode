#include <bits/stdc++.h>
using namespace std;

    //-----------------------------
int N,M;
int Map1[10][10];
int Map2[10][10];
int ans;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
vector<pair<int,int>>cctv;

bool getOutTheMap(int x,int y) {
    return x<0||y<0||x>=N||y>=M;
}
void monitor(int x,int y,int dir) {
    dir%=4;
    while (1) {
        x+=dx[dir]; y+=dy[dir];
        if (getOutTheMap(x,y)||Map2[x][y]==6)return;
        if (Map2[x][y]!=0)continue;
        Map2[x][y]=7;
    }
}
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    cin>>N>>M;
    for (int i=0;i<N;++i) {
        for (int j=0;j<M;++j) {
            cin>>Map1[i][j];
            if (Map1[i][j]>=1&&Map1[i][j]<6) {
                cctv.push_back({i,j});
            }
            if (Map1[i][j]==0)ans++;
        }
    }
    for (int tmp=0;tmp< (1<<(2*cctv.size()));++tmp) {
        for (int i=0;i<N;++i)
            for (int j=0;j<M;++j)
                Map2[i][j]=Map1[i][j];
        int copyTmp=tmp; //4진수
        for (int i=0;i<cctv.size();++i) {
            int dir=copyTmp%4;
            copyTmp/=4;
            int x,y; tie(x,y)=cctv[i];
            if (Map1[x][y]==1)
                monitor(x,y,dir);
            else if (Map1[x][y]==2) {
                monitor(x,y,dir); monitor(x,y,dir+2);
            }
            else if (Map1[x][y]==3) {
                monitor(x,y,dir); monitor(x,y,dir+1);
            }
            else if (Map1[x][y]==4) {
                monitor(x,y,dir); monitor(x,y,dir+1); monitor(x,y,dir+2);
            }
            else if (Map1[x][y]==5) {
                monitor(x,y,dir); monitor(x,y,dir+1); monitor(x,y,dir+2); monitor(x,y,dir+3);
            }
        }
        int cnt=0;
        for (int i=0;i<N;++i)
            for (int j=0;j<M;++j)
                cnt+=(Map2[i][j]==0);
        ans=min(ans,cnt);
    }
    cout<<ans;

    //-----------------------------//
    return 0;
    }