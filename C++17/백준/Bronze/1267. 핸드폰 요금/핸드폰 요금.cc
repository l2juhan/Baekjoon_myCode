#include <bits/stdc++.h>

using namespace std;




int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
//-------------------------------------------------------------------------

    int tc;
    cin >> tc;
    int m=0,y=0;

    while (tc--) {
        int n;
        cin >> n;
        y+=(n/30+1)*10;
        m+=(n/60+1)*15;
    }
    if (m<y) {
        cout << "M " << m;
    }
    else if (m>y) {
        cout << "Y " << y;
    }
    else {
        cout << "Y M " << y;
    }

//-------------------------------------------------------------------------
}
