#include <bits/stdc++.h>
using namespace std;
    //-----------------------------

    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------
    int t;
    cin >> t;
    while (t--) {
        string p;
        int size;
        cin >> p;
        cin >> size;
        string n;
        string tmp;
        deque<int>dq;
        bool error=false;
        bool isReverse=false;
        cin >> n;
        for (char& c:n) {
            if (c==',' || c==']') {
                if (!tmp.empty()) {
                    dq.push_back(stoi(tmp));
                    tmp.clear();
                }
            }
            else if (isdigit(c)){tmp+=c;}
            else {continue;}
        }
        for (char&c:p) {
            if (c=='R') {
                isReverse=!isReverse;
            }
            else if(c=='D'){
                if (dq.empty()){error=true;break;}
                if (!isReverse) {
                    dq.pop_front();
                }
                else {
                    dq.pop_back();
                }
            }
        }
        if (error){cout << "error\n";}
        else {
            cout << "[";
            if (isReverse){reverse(dq.begin(),dq.end());}
            for (int i=0;i<dq.size();++i) {
                cout << dq[i];
                if (i!=dq.size()-1)cout << ",";
            }
            cout << "]\n";
        }

    }

    //-----------------------------
    }