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

int rev(int x){
    string s = to_string(x);
    reverse(s.begin(),s.end());
    return atoi(s.c_str());
}


int main(int argc,char *argv[]){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    cin >> s;
    //a=97,z=122,36개의 배열크키 만들기
    int a[26]{0};
    
    for(int i=0;i<s.size();i++){
        a[(int)s[i]-97]++;
    }
    for(int i=0;i<26;i++){
        cout << a[i]<< " ";
    }
    
    
    
    
    return 0;
}
         
  

