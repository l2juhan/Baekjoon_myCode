#include <string>
#include <vector>

using namespace std;
// schedules = n 명의 출근 희망 시각, timelogs = 직원의 실제 출근시간, startday = 이벤트 시작 요일
int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = schedules.size();
    for(int i = 0; i < schedules.size(); ++i){
        int cmp = schedules[i];
        cmp += 10;
        cmp = cmp%100 > 59 ? cmp + 40 : cmp;
        schedules[i] = cmp;
    }
    vector<bool> done(answer,true);
    for(int i = startday; i < startday + 7; i++){
        if( i % 7 == 6 || i % 7 == 0) continue;
        for(int j = 0; j < schedules.size(); ++j){
            if(done[j] && timelogs[j][i-startday] > schedules[j]){
                --answer;
                done[j] = false;
                continue;
            }
        }
    }
    return answer;
}