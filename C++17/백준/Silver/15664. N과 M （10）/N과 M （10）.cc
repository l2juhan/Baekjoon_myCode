#include <bits/stdc++.h>
using namespace std;

    //-----------------------------
int N,M;
vector<int>s;
int arr[10];
bool isUsed[10];
void func(int k,int idx) {
    if (k==M) {
        for (int i=0;i<M;++i) {
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    int prev_num = 0;
    for (int i=idx;i<N;++i) {
        if (!isUsed[i]&&prev_num!=s[i]) {
            arr[k]=s[i];
            prev_num=s[i];
            isUsed[i]=true;
            func(k + 1,i);
            isUsed[i] = false;
        }

    }
}
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    cin>>N>>M;
   for (int i=0;i<N;++i) {
        int a; cin>>a;
        s.push_back(a);
    }
    sort(s.begin(),s.end());

    func(0,0);
    //-----------------------------//
    return 0;
    }