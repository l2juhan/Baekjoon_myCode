#include <iostream>
#include <string>//stoi(string to num),to_string(num to string)
#include <vector>
#include <algorithm>
#include <cmath>


using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    

    int a[50];
    int b[50];
    int n;
    int ans=0;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        cin >> b[i];
    }

    sort(a,a+n,greater<int>());
    sort(b,b+n,less<int>());

    for(int i=0;i<n;i++){
        ans+=a[i]*b[i];
    }

cout << ans;

    return 0;
}