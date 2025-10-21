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

long long pow(long long a,long long b,long long c) {
    if (b==1)return a%c;
    long long v=pow(a,b/2,c);
    v=v*v%c;
    if (b%2==0)return v;
    else return v*a%c;
}
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    long long a,b,c; cin>>a>>b>>c;
    cout<<pow(a,b,c);

    //-----------------------------//
    return 0;
    }