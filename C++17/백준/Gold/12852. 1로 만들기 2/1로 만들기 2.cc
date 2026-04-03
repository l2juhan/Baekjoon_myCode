#include <bits/stdc++.h>
using namespace std;
    //-----------------------------
int arr[1000001];
int dst[1000001];
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    for (int i=2;i<=n;++i) {
        arr[i]=arr[i-1]+1;
        dst[i]=i-1;
        if (i%2==0) {
            if (arr[i]>(arr[i/2]+1)) {
                arr[i]=arr[i/2]+1;
                dst[i]=i/2;
            }
        }
        if (i%3==0) {
            if (arr[i]>(arr[i/3]+1)) {
                arr[i]=arr[i/3]+1;
                dst[i]=i/3;
            }
        }
    }
    cout << arr[n]<<'\n';
    cout << n << ' ';
    while (1) {
        if (n==1) {
            break;
        }else {
            cout<<dst[n]<<' ';
            n=dst[n];
        }
    }
    //-----------------------------//
    return 0;
}