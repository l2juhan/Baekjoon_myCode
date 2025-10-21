#include <bits/stdc++.h>
using namespace std;

    //-----------------------------
int n0,n1;
int arr[130][130];
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
        func(x,y,size/2);
        func(x+size/2,y,size/2);
        func(x,y+size/2,size/2);
        func(x+size/2,y+size/2,size/2);
    }
    else {
        if (arr[x][y]==0)n0++;
        else n1++;
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
    cout<<n0<<'\n'<<n1<<'\n';

    //-----------------------------//
    return 0;
    }