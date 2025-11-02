#include <bits/stdc++.h>

using namespace std;
    //-----------------------------

    //-----------------------------
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //-----------------------------//
    int tc=3;
    while (tc--) {
        int h1,m1,s1;              //18  0  0
        int h2,m2,s2;              // 9  0  1
        int h,m,s;                 //      59
        // 예시: 20-40=40;
        cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
        if (s2-s1<0){s=s2-s1+60;m2-=1;}
        else s=s2-s1;
        if (m2<0){m2+=60;h2-=1;}
        m=m2-m1;
        if (m<0){m+=60;h2-=1;}
        h=h2-h1;
        cout << h << " " << m << " " << s << '\n';
    }

    //-----------------------------//
    return 0;
    }