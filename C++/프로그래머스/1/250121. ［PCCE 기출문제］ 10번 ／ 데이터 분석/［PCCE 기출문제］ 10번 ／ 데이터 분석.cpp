#include <bits/stdc++.h>
using namespace std;

// data=[코드번호,제조일,최대수량,현재수량], ext=기준속성,val_ext=기준값,sort_by=출력할속성(오름차순)
vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    int index;
    int idx;
    // ext
    if(ext=="code")index=0;
    else if(ext=="date")index=1;
    else if(ext=="maximum")index=2;
    else index=3;
    // sort_by
    if(sort_by=="code") idx=0;
    else if(sort_by=="date") idx=1;
    else if(sort_by=="maximum") idx=2;
    else idx=3;
    
    for(const auto &v: data){ // 필터링
        if(v[index]<val_ext) answer.push_back(v);
    }
    sort(answer.begin(),answer.end(),[idx](const vector<int> &a, const vector<int> &b){
        return a[idx] < b[idx];
    });
    
    return answer;
}