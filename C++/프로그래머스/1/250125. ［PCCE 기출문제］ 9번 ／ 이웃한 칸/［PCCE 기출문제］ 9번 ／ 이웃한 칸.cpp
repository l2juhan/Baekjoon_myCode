#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    int size=board.size();
    string color=board[h][w];
    if(w!=0){ //left
        board[h][w-1]==color?answer++:0;
    }
    if(h!=0){ //top
        board[h-1][w]==color?answer++:0;
    }
    if(w!=size-1){ // right
        board[h][w+1]==color?answer++:0;
    }
    if(h!=size-1){ //bottom
        board[h+1][w]==color?answer++:0;
    }
    return answer;
}