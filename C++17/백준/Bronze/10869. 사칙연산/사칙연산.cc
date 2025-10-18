#include <iostream>
#include <cassert>
using namespace std;

int main(){
    int a,b;
    int ans1,ans2,ans3,ans4,ans5;
    cin >> a;
    cin >> b;
    if(b != 0)
    {ans1 = a + b;
    ans2 = a - b;
    ans3 = a * b;
    ans4 = a / b;
    ans5 = a % b;
    cout << ans1 << endl;
    cout << ans2 << endl;
    cout << ans3 << endl;
    cout << ans4 << endl;
    cout << ans5;
}
    else{
        assert(false);
    }
}