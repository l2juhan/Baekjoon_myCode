#include <bits/stdc++.h>
using namespace std;

    //-----------------------------
void func(int x,int y,int n) {
    if (x%3==1&&y%3==1)cout<<' ';
    else {
        if (n/3<=1)cout<<'*';
        else func(x/3,y/3,n/3);
    }
}

    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int N; cin>>N;
    for (int i=0;i<N;++i) {
        for (int j=0;j<N;++j)func(i,j,N);
        cout<<'\n';
    }
    //-----------------------------//
    return 0;
    }