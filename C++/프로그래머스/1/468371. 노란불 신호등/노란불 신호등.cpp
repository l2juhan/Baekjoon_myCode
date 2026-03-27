#include <bits/stdc++.h>
using namespace std;


int solution(vector<vector<int>> signals) {
    int answer = 0;
    int n = signals.size();
    
    vector<int> cycles(n);
    for(int i=0;i<n;++i) cycles[i]=signals[i][0]+signals[i][1]+signals[i][2];
    int lcm_ =1;
    for(int i=0;i<n;i++)lcm_=lcm(lcm_,cycles[i]);
    for(int i=0;i<lcm_;++i){
        bool isAllYellow = true;
        for(int j=0;j<n;++j){
            int g=signals[j][0];
            int r=signals[j][1]+g;
            // g<= yellow < r;
            int location= i % cycles[j];
            if(location < g || location >= r){
                isAllYellow=false;
                break;
            }
        }
        if(isAllYellow)return i+1;
    }
    return -1;
}