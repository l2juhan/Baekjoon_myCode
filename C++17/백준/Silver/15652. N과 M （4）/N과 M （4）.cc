#include <bits/stdc++.h>
using namespace std;

    //-----------------------------
int N,M;
int arr[8];
void func(int k,int s) {
    if (k==M) {
        for (int i=0;i<M;++i) {
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    for (int i=s;i<=N;++i) {
        arr[k]=i;
        func(k+1,i);
    }
}
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    cin>>N>>M;
    func(0,1);
    //-----------------------------//
    return 0;
    }