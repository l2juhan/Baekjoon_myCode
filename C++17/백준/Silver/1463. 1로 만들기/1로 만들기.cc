#include <bits/stdc++.h>
using namespace std;

    //-----------------------------
int arr[1000001];
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int n;cin>>n;
    for (int i=n;i>=1;--i) {
        if (i%3==0) {
            if (arr[i/3]==0)arr[i/3]=arr[i]+1;
            else arr[i/3]=min(arr[i/3],arr[i]+1);
        }
        if (i%2==0) {
            if (arr[i/2]==0)arr[i/2]=arr[i]+1;
            else arr[i/2]=min(arr[i/2],arr[i]+1);
        }
        if (arr[i-1]==0)arr[i-1]=arr[i]+1;
        else arr[i-1]=min(arr[i-1],arr[i]+1);
    }
    cout<<arr[1];
    //-----------------------------//
    return 0;
    }