#include <bits/stdc++.h>
using namespace std;

    //-----------------------------
int N,M;
char ans[15];
char arr[15];
void func(int k,int idx) {
    if (k==N) {
        int cnt=0;
        for (int i=0;i<N;++i) {
            if (ans[i]=='a'||ans[i]=='e'||ans[i]=='i'||ans[i]=='o'||ans[i]=='u') {
                cnt++;
            }
        }
        if (cnt>=1&&N-cnt>=2) {
            for (int i=0;i<N;++i)cout<<ans[i];
            cout<<'\n';
        }
    }
        for (int i=idx;i<M;++i) {
            ans[k]=arr[i];
            func(k+1,i+1);
        }

}
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    cin>>N>>M;
    for (int i=0;i<M;++i) {
        cin>>arr[i];
    }
    sort(arr,arr+M);
    func(0,0);
    //-----------------------------//
    return 0;
    }