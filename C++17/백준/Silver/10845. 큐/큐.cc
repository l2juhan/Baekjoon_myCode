#include <iostream>
#include <string>//stoi(string to num),to_string(num to string)
#include <vector>
#include <algorithm>
#include <queue>


using namespace std;

int rev(int x){
    string s = to_string(x);
    reverse(s.begin(),s.end());
    return atoi(s.c_str());
}

bool compare(pair<int,int>a,pair<int,int>b){
    if(a.second==b.second){
        return a.first < b.first;
    }
    else{
        return a.second < b.second;
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    queue<int>q;
    int testCase;
    cin >> testCase;
    string s;
    while(testCase--){
        cin >> s;
        
        if(s=="push"){
            int a;
            cin >> a;
            q.push(a);
        }
        
        else if(s=="empty"){
            if(q.empty()) {cout << "1\n";}
            else {cout << "0\n";}
        }
        
        else if(s=="size") {cout << q.size() << "\n";}
        
        else if(s=="pop"){
            if(q.empty()){cout << "-1\n";}
            else {cout << q.front() << "\n"; q.pop();}
        }
        
        else if(s=="front"){
            if(q.empty()){cout << "-1\n";}
            else{cout << q.front() << "\n";}
        }
        
        else if(s=="back"){
            if(q.empty()){cout << "-1\n";}
            else{cout << q.back() << "\n";}
        }
        else{continue;}
        
        
        
    }
    
    
    
    
    
        
    return 0;
}
    
    

