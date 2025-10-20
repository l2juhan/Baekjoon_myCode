#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>//stoi(string to num),to_string(num to string)
#include <vector>
#include <cmath>
#include <algorithm>
#include <stack>
#include <unordered_map>

using namespace std;


int main(int argc,char *argv[]){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int num;//1~10
    int value;//1~10^8
    cin >> num >> value;
    int coin[10]{0};
    int ans=0;
    for(int i=0;i<num;i++){
        cin >> coin[i];
    }
    
    for(int i=num-1;i>=0;i--){
        if(coin[i]<=value){
            ans+=value/coin[i];
            value%=coin[i];
        }
    }
    
    cout << ans;
    
    
    return 0;
}
         
  

