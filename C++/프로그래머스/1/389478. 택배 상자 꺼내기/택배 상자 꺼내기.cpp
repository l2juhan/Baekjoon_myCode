#include <string>
#include <vector>

using namespace std;
// n = 택배 상자의 수, w = 가로로 놓는 상자 수, num = 목표 상자 번호
int solution(int n, int w, int num) {
    int ans=0;
    int h = (num - 1) / w; // 0 부터 시작
    int index = h % 2 == 0 ? (num-1) % w : w - 1 - (num-1) % w; // 0 부터 시작
    int max_h = (n - 1) / w; // 0 부터 시작
    for(int i = h; i<=max_h; ++i){
        int nn = min(w,n-w*i);
        int realIndex = i % 2 == 0 ? index : w - 1 - index;
        if(realIndex < nn) ans++;
    }
    return ans;
}