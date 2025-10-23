#include <bits/stdc++.h>
using namespace std;

    //-----------------------------

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int Map[5][5];
bool pick[25];
int ans;

bool isMoreThan4() {
    int cnt=0;
    for (int i=0;i<25;++i) {
        if (pick[i]==1) {
            int x=i/5; int y=i%5;
            if (Map[x][y]==1)cnt++;
        }
    }return cnt>=4;

}

bool isAdjacency() {
    queue<pair<int,int>> q;
    bool check[5][5];
    bool done[5][5];
    memset(check,false,sizeof(check)); memset(done,false,sizeof(check));
    int tmp=0;
    for (int i=0;i<25;++i) {
        if (pick[i]==1) {
            int x=i/5; int y=i%5;
            check[x][y]=1;
            if (tmp==0) {
                q.push(make_pair(x,y));
                done[x][y]=1;
                tmp++;
            }
        }
    }
    int cnt=1;
    while (!q.empty()) {
        int x=q.front().first; int y=q.front().second;
        q.pop();

        for (int i=0;i<4;++i) {
            int nx=x+dx[i]; int ny=y+dy[i];
            if (nx<0||ny<0||nx>=5||ny>=5)continue;
            if (check[nx][ny]==1&&done[nx][ny]==0) {
                done[nx][ny]=1;
                q.push(make_pair(nx,ny));
                cnt++;
            }
        }
    }
    return cnt==7;
}

void BFS(int idx,int cnt) {
    if (cnt==7) {
        if (isMoreThan4()) {
            if (isAdjacency()) ans++;
        }
        return;
    }
    for (int i=idx;i<25;++i) {
        if (!pick[i]) {
            pick[i]=true;
            BFS(i+1,cnt+1);
            pick[i]=false;
        }
    }
}


    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    for (int i=0;i<5;++i) {
        string s; cin>>s;
        for (int j=0;j<5;++j) {
            if (s[j]=='S')Map[i][j]=1;
            else Map[i][j]=2;
        }
    }
    BFS(0,0);
    cout<<ans;
    //-----------------------------//
    return 0;
    }