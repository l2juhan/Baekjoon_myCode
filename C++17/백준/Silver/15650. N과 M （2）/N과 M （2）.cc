#include <bits/stdc++.h>
using namespace std;

    //-----------------------------
int n,m;
int arr1[30];
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    cin>>n>>m;
    fill(arr1,arr1+n,1);
    for (int i=0;i<m;++i)arr1[i]=0;
    //1 1 0 0
    do {
        for (int i=0;i<n;++i) {
            if (arr1[i]==0)cout<<i+1<<' ';
        }
        cout<<'\n';
    }while(next_permutation(arr1,arr1+n));

    //-----------------------------//
    return 0;
    }