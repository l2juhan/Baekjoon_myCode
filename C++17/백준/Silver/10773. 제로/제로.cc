#include <iostream>
#include <cstdlib>
#include <string>//stoi(string to num),to_string(num to string)
#include <vector>
#include <cmath>
#include <algorithm>
#include <stack>
#include <unordered_map>

using namespace std;


int main(int argc, char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int num;
    vector<int>v;
    int ans=0;
    
    cin >> num;
    while(num--){
        int input;
        cin >> input;
        if(input!=0)v.push_back(input);
        else if(!v.empty()) v.pop_back();
    }
    
    for(auto itr=v.begin();itr!=v.end();itr++) ans+=*itr;
    
    cout << ans;
    return 0;
    }
         
  

