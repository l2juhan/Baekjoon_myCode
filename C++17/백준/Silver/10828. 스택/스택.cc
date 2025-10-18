#include <iostream>
#include <string>//stoi(string to num),to_string(num to string)
#include <vector>
#include <algorithm>
#include <stack>



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
    
    stack<int> st;
    int testCase;
    cin >> testCase;
    string s;
    while(testCase--){
        cin >> s;
        
        if(s=="push"){
            int a;
            cin >> a;
            st.push(a);
        }
        
        else if(s=="empty"){
            if(st.empty()) {cout << "1\n";}
            else {cout << "0\n";}
        }
        
        else if(s=="size") {cout << st.size() << "\n";}
        
        else if(s=="pop"){
            if(st.empty()){cout << "-1\n";}
            else {cout << st.top() << "\n"; st.pop();}
        }
        
        else if("top"){
            if(st.empty()){cout << "-1\n";}
            else{cout << st.top() << "\n";}
        }
        
        else{continue;}
    }
    
    
    
    
    
    
    
        
        
        
        return 0;
    }
    
    
    

