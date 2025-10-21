#include <bits/stdc++.h>
using namespace std;

    //-----------------------------
int arr[70][70];
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
        cout<<'(';
        func(x,y,size/2);
        func(x,y+size/2,size/2);
        func(x+size/2,y,size/2);
        func(x+size/2,y+size/2,size/2);
        cout<<')';
    }
    else {
        if (arr[x][y]==0) cout<<0;
        else cout<<1;
    }
}
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int N;
    cin>>N;
    string s;
    for (int i=0;i<N;++i) {
        cin>>s;
        for (int j=0;j<N;++j)arr[i][j] = s[j] - '0';
    }
    func(0,0,N);

    //-----------------------------//
    return 0;
    }