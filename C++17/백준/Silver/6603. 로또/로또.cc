#include <bits/stdc++.h>
using namespace std;

    //-----------------------------
int N;
vector<int>v(13);
int arr[6];
void func(int k,int s) {
    if (k==6) {
        for (int i=0;i<6;++i)cout<<arr[i]<<' ';
        cout<<'\n';
        return;
    }
    for (int i=s;i<N;++i) {
        int a=v[i];
            arr[k]=a;
            func(k+1,i+1);
    }
}
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    while (1) {
        cin>>N;
        if (N==0)return 0;
        v.clear();
        for (int i=0;i<N;++i) {
            int a;cin>>a;
            v.push_back(a);
        }
        func(0,0);
        cout<<'\n';
    }

    //-----------------------------//
    return 0;
    }