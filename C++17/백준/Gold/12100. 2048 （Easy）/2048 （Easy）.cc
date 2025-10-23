#include <bits/stdc++.h>
using namespace std;

    //-----------------------------
int N;
int Map[20][20];
int testMap[20][20];
int ans;
void moveTheBox(int k) {
    if (k==0) { // 위로 이동
        for (int j = 0; j < N; ++j) {
            for (int i = 1; i < N; ++i) {
                if (testMap[i][j] != 0) {
                    int ii = i - 1;
                    while (ii >= 0 && testMap[ii][j] == 0) {
                        --ii;
                    }
                    if (i != ii + 1) {
                        testMap[ii + 1][j] = testMap[i][j];
                        testMap[i][j] = 0;
                    }
                }
            }
        }
    } else if (k==1) { // 오른쪽으로 이동
        for (int i = 0; i < N; ++i) {
            for (int j = N - 2; j >= 0; --j) {
                if (testMap[i][j] != 0) {
                    int jj = j + 1;
                    while (jj < N && testMap[i][jj] == 0) {
                        ++jj;
                    }
                    if (j != jj - 1) {
                        testMap[i][jj - 1] = testMap[i][j];
                        testMap[i][j] = 0;
                    }
                }
            }
        }
    } else if (k==2) { // 아래로 이동
        for (int j = 0; j < N; ++j) {
            for (int i = N - 2; i >= 0; --i) {
                if (testMap[i][j] != 0) {
                    int ii = i + 1;
                    while (ii < N && testMap[ii][j] == 0) {
                        ++ii;
                    }
                    if (i != ii - 1) {
                        testMap[ii - 1][j] = testMap[i][j];
                        testMap[i][j] = 0;
                    }
                }
            }
        }
    } else { // 왼쪽으로 이동
        for (int i = 0; i < N; ++i) {
            for (int j = 1; j < N; ++j) {
                if (testMap[i][j] != 0) {
                    int jj = j - 1;
                    while (jj >= 0 && testMap[i][jj] == 0) {
                        --jj;
                    }
                    if (j != jj + 1) {
                        testMap[i][jj + 1] = testMap[i][j];
                        testMap[i][j] = 0;
                    }
                }
            }
        }
    }
}

void combineTheBox(int k) {
    bool merge[20][20] = {false,};
    if (k==0) { //위로 탐색
        for (int i=1;i<N;++i) {
            for (int j=0;j<N;++j) {
                if (testMap[i][j]!=0){ //존재하는 박스일때
                int ii=i-1;
                while (ii>=0) { //위로 탐색
                        if (testMap[ii][j]!=0&&testMap[ii][j]!=testMap[i][j])break; //다른 박스를 만났을때
                        if (testMap[i][j]==testMap[ii][j]) {//같은 박스를 만났을때
                            if (!merge[ii][j]) {
                                testMap[ii][j]*=2;
                                testMap[i][j]=0;
                                merge[ii][j]=true;
                                break;
                            }break;
                        }
                        --ii;
                    }
                }
            }
        }
    }else if (k==1) { //오른쪽으로 탐색
        for (int i=0;i<N;++i) {
            for (int j=N-2;j>=0;--j) {
                if (testMap[i][j]!=0) { //존재하는 박스일때
                    int jj=j+1;
                    while (jj<N) { //오른쪽으로 탐색
                        if (testMap[i][jj]!=0&&testMap[i][jj]!=testMap[i][j])break; //다른 박스를 만났을때
                        if (testMap[i][j]==testMap[i][jj]) { //같은 박스를 만났을때
                            if (!merge[i][jj]) {
                                testMap[i][jj]*=2;
                                testMap[i][j]=0;
                                merge[i][jj]=true;
                                break;
                            }break;
                        }
                        ++jj;
                    }
                }
            }
        }
    }else if (k==2) { //아래로 탐색
        for (int i=N-2;i>=0;--i) {
            for (int j=0;j<N;++j) {
                if (testMap[i][j]!=0){ //존재하는 박스일때
                int ii=i+1;
                while (ii<N) { //아래로 탐색
                        if (testMap[ii][j]!=0&&testMap[ii][j]!=testMap[i][j])break; //다른 박스를 만났을때
                        if (testMap[i][j]==testMap[ii][j]) { //같은 박스를 만났을때
                            if (!merge[ii][j]) {
                                testMap[ii][j]*=2;
                                testMap[i][j]=0;
                                merge[ii][j]=true;
                                break;
                            }break;
                        }
                        ++ii;
                    }
                }
            }
        }
    }else { //왼쪽으로 탐색
        for (int i=0;i<N;++i) {
            for (int j=1;j<N;++j) {
                if (testMap[i][j]!=0) { //존재하는 박스일때
                    int jj=j-1;
                    while (jj>=0) { //왼쪽으로 탐색
                        if (testMap[i][jj]!=0&&testMap[i][jj]!=testMap[i][j])break; //다른 박스를 만났을때
                        if (testMap[i][j]==testMap[i][jj]) { //같은 박스를 만났을때
                            if (!merge[i][jj]) {
                                testMap[i][jj]*=2;
                                testMap[i][j]=0;
                                merge[i][jj]=true;
                                break;
                            }break;
                            }
                        --jj;
                        }
                    }
                }
            }
        }
    }

    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    cin>>N;
    for (int i=0;i<N;++i)
        for (int j=0;j<N;++j)
            cin>>Map[i][j];

    for (int i=0;i<1024;++i) { //4진수 활용. 즉,4^5-1 가지 경우로 방향 설정
        for (int x=0;x<N;++x) //testMap Map 으로 초기화
            for (int y=0;y<N;++y)
                testMap[x][y]=Map[x][y];
        int k=i;
        for (int j=0;j<5;++j) { //5번 이동
            moveTheBox(k%4);
            combineTheBox(k%4);
            moveTheBox(k%4);
            k/=4;
        }
        for (int x=0;x<N;++x)  // 가장 큰 수 찾기
            for (int y=0;y<N;++y) {
                if (testMap[x][y]>ans)ans=testMap[x][y];
            }
    }
    cout<<ans;
    //-----------------------------//
    return 0;
    }