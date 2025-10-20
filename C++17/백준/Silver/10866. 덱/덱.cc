#include <iostream>
#include <string>//stoi(string to num),to_string(num to string)
#include <vector>
#include <algorithm>
#include <deque>


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
    
    deque<int>d;
    int testCase;
    cin >> testCase;
    string s;
    while(testCase--){
        cin >> s;
        if(s=="push_front"){
            int a;
            cin >> a;
            d.push_front(a);
        }
        else if(s=="push_back"){
            int a;
            cin >> a;
            d.push_back(a);
        }
        else if(s=="pop_front"){
            if(d.empty()){cout << "-1\n";}
            else{cout << d.front() << "\n"; d.pop_front();}
        }
        else if(s=="pop_back"){
            if(d.empty()){cout << "-1\n";}
            else{cout << d.back() << "\n"; d.pop_back();}
        }
        else if(s=="size"){cout << d.size() << "\n";}
        else if(s=="empty"){
            if(d.empty()){cout << "1\n";}
            else{cout << "0\n";}
        }
        else if(s=="front"){
            if(d.empty()){cout << "-1\n";}
            else{cout << d.front() << "\n";}
        }
        else if(s=="back"){
            if(d.empty()){cout << "-1\n";}
            else{cout << d.back() << "\n";}
        }
        else{continue;}
        
        
        
        
        
    }
    return 0;
}
    
    

