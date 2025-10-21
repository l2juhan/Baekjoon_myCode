#include <bits/stdc++.h>
using namespace std;

    //-----------------------------
int a,b,c;
int arr[2200][2200];
void func(int x,int y,int size) {
    bool same=true;
    for (int i=x;i<x+size;++i) {
        for (int j=y;j<y+size;++j) {
            if (arr[i][j]!=arr[x][y]) {
                same=false;
                break;
            }
        }
        if (!same)break;
    }
    if (!same) {
        func(x,y,size/3);
        func(x+size/3,y,size/3);
        func(x+size/3+size/3,y,size/3);
        func(x,y+size/3,size/3);
        func(x+size/3,y+size/3,size/3);
        func(x+size/3+size/3,y+size/3,size/3);
        func(x,y+size/3+size/3,size/3);
        func(x+size/3,y+size/3+size/3,size/3);
        func(x+size/3+size/3,y+size/3+size/3,size/3);
    }
    else {
        if (arr[x][y]==-1)a++;
        else if (arr[x][y]==0)b++;
        else c++;
    }
}
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int N;
    cin>>N;
    for (int i=0;i<N;++i) {
        for (int j=0;j<N;++j)cin>>arr[i][j];
    }
    func(0,0,N);
    cout<<a<<'\n'<<b<<'\n'<<c<<'\n';

    //-----------------------------//
    return 0;
    }