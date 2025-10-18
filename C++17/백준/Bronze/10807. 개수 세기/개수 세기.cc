#include <iostream>
#include <cstdlib>
#include <string>//stoi(string to num),to_string(num to string)
#include <vector>
#include <cmath>
#include <algorithm>
#include <stack>

using namespace std;

int find_prime(int a){
    if(a==1) return false;
    int i=2;
    bool prime = true;
    while(i<a){
        if(a%i==0) {prime =false; break;}
        i++;
    }
    return prime;
}
int fibbo(int a){
    int f[a+2];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=a;i++){
        f[i]=f[i-1]+f[i-2];
    }
    return f[a];
}

int rev(int n) {
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return atoi(s.c_str());
}



int main(){
    ios_base::sync_with_stdio(false);
    
    int arr[101]{0};
    int ans=0;
    int tc;
    cin >> tc;
    int f_n;
    for(int i=1;i<=tc;i++){
        int n;
        cin >> n;
        arr[i]=n;
    }
    cin >> f_n;

    for(int i=1;i<=tc;i++){
        if(arr[i]==f_n) ans++;
    }
    cout << ans;
    
    return 0;
}
