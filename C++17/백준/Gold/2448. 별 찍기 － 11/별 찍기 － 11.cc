#include <bits/stdc++.h>
using namespace std;

    //-----------------------------
char arr[7000][7000];
void star(int n, int x, int y)
{
    if (n == 3)
    {
        //별을 그린다.
        arr[y][x] = '*';
        arr[y + 1][x - 1] = '*';
        arr[y + 1][x + 1] = '*';
        arr[y + 2][x - 2] = '*';
        arr[y + 2][x - 1] = '*';
        arr[y + 2][x] = '*';
        arr[y + 2][x + 1] = '*';
        arr[y + 2][x + 2] = '*';
        return;
    }
    star(n / 2, x, y);
    star(n / 2, x - (n / 2), y + (n / 2));
    star(n / 2, x + (n / 2), y + (n / 2));
}


    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int N; cin>>N;
    memset(arr, ' ', sizeof(arr));
    star(N,N-1,0);
    for (int i=0;i<N;++i) {
        for (int j=0;j<2*N-1;++j)cout<<arr[i][j];
        cout<<'\n';
    }
    //-----------------------------//
    return 0;
    }