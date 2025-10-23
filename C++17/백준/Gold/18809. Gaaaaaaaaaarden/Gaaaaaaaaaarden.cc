#include <bits/stdc++.h>
using namespace std;

    //-----------------------------
int N,M,G,R;
int Map[50][50];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
vector<pair<int,int>>v;
int BFS(queue<pair<int,int>>& qG, queue<pair<int,int>>& qR, int gMap[50][50], int rMap[50][50]) {
    int flower_count = 0;
    int time = 1;

    while (true) {
        time++;

        int g_size = qG.size();
        for (int i = 0; i < g_size; ++i) {
            pair<int,int> cur = qG.front();
            qG.pop();

            if (gMap[cur.first][cur.second] == -1) continue;

            for (int dir = 0; dir < 4; ++dir) {
                int nx = cur.first + dx[dir];
                int ny = cur.second + dy[dir];

                if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
                if (Map[nx][ny] == 0) continue;
                if (gMap[nx][ny] != 0 || rMap[nx][ny] != 0) continue;

                gMap[nx][ny] = time;
                qG.push({nx, ny});
            }
        }

        int r_size = qR.size();
        for (int i = 0; i < r_size; ++i) {
            pair<int,int> cur = qR.front();
            qR.pop();

            for (int dir = 0; dir < 4; ++dir) {
                int nx = cur.first + dx[dir];
                int ny = cur.second + dy[dir];

                if (nx < 0 || nx >= N || ny < 0 || ny >= M || Map[nx][ny] == 0) continue;

                if (gMap[nx][ny] == time) {
                    flower_count++;
                    gMap[nx][ny] = -1;
                    rMap[nx][ny] = -1;
                }
                else if (gMap[nx][ny] == 0 && rMap[nx][ny] == 0) {
                    rMap[nx][ny] = time;
                    qR.push({nx, ny});
                }
            }
        }
        if (qG.empty() && qR.empty()) {
            break;
        }
    }
    return flower_count;
}
    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    cin>>N>>M>>G>>R;
    for (int i=0;i<N;++i) {
        for (int j=0;j<M;++j) {
            cin>>Map[i][j];
            if (Map[i][j]==2)v.push_back({i,j});
        }
    } //0:호수, 1:기본땅, 2:배양액 뿌리는 땅
    vector<int> picker;
    // 0: 안 뿌림, 1: 초록색, 2: 빨간색
    for(int i = 0; i < G; i++) picker.push_back(1);
    for(int i = 0; i < R; i++) picker.push_back(2);
    for(int i = 0; i < v.size() - G - R; i++) picker.push_back(0);
    sort(picker.begin(), picker.end());
    int max_flower = 0;
    do {
        int GMap[50][50]={0,};
        int RMap[50][50]={0,};
        queue<pair<int,int>> qG;
        queue<pair<int,int>> qR;
        for (int i=0;i<picker.size();++i) {
            if (picker[i]==1) {
                qG.push(v[i]);
                GMap[v[i].first][v[i].second] = 1;
            }
            else if (picker[i]==2) {
                qR.push(v[i]);
                RMap[v[i].first][v[i].second] = 1;
            }
        }
        int current_flower = BFS(qG,qR,GMap,RMap);
        max_flower = max(max_flower, current_flower);

    } while (next_permutation(picker.begin(), picker.end()));
    cout<<max_flower;


    //-----------------------------//
    return 0;
    }