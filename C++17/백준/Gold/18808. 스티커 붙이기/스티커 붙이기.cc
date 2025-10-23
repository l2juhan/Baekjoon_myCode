#include <bits/stdc++.h>
using namespace std;

    //-----------------------------
int N,M,K;
int ans;
vector<vector<vector<int>>> sticker;
int Map[40][40];

void rotation(vector<vector<int>>& vv) { //90도 돌려주는 함수
    int x=vv.size(); //4
    int y=vv[0].size(); //6
    vector<vector<int>> nv(y);
    for (int i=0;i<y;++i) {
        for (int j=0;j<x;++j) {
            nv[i].push_back(vv[x-1-j][i]);
        }
    }
    vv.clear();
    vv=nv;
}

bool checkStiker(const vector<vector<int>>& vv, int x, int y) {
    for (int i=0;i<vv.size();++i) {
        for (int j=0;j<vv[0].size();++j) {
            if (vv[i][j]==1) {
                if (x+i>=N||y+j>=M||x+i<0||y+j<0)return false;
                if (Map[x+i][y+j]==1)return false;
            }
        }
    }
    return true;
}

void plusSticker(vector<vector<int>>& vv, int x, int y) {
    for (int i=0;i<vv.size();++i) {
        for (int j=0;j<vv[0].size();++j) {
            if (vv[i][j]==1&&Map[x+i][y+j]==0)Map[x+i][y+j]=1;
        }
    }
}
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    cin>>N>>M>>K;
    vector<vector<vector<int>>> v(K);
    for (int i=0;i<K;++i) {
        int x,y; cin>>x>>y;
        v[i].resize(x);
        for (int j=0;j<x;++j)
            for (int k=0;k<y;++k) {
                int n; cin>>n;
                v[i][j].push_back(n);
            }
    }
        for (int i=0;i<K;++i) {
            int k=4;
            while (k--) {
                bool isTrue=false;
                for (int x=0;x<N;++x) {
                    for (int y=0;y<M;++y) {
                        if (checkStiker(v[i],x,y)) {
                            isTrue=true;
                            plusSticker(v[i],x,y);
                        }
                        if (isTrue)break;
                    }
                    if (isTrue)break;
                }
                if (isTrue)break;
                rotation(v[i]);
            }
        }
    for (int i=0;i<N;++i) {
        for (int j=0;j<M;++j) {
            if (Map[i][j]==1)ans++;
        }
    }
    cout<<ans;
    //-----------------------------//
    return 0;
    }