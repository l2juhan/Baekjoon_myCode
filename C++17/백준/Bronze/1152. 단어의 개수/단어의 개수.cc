#include <bits/stdc++.h>

using namespace std;
    //-----------------------------

    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------
    string s; getline(cin,s);
    int cnt=0;
    stringstream ss(s);

    string w;
    while (ss >> w) {
        cnt++;
    }
    cout << cnt;
    
    //-----------------------------
    return 0;
    }