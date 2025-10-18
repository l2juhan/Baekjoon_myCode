#include <iostream>
#include <cstdlib>
#include <string>//stoi(string to num),to_string(num to string)
#include <vector>
#include <cmath>
#include <algorithm>

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
    
    int a,b,c,n;
    cin >> a >> b >> c;
    n=a*b*c;
    int num[10] = {0};
    while(n>0){
        num[n%10]++;
        n/=10;
    }
    for(int i=0;i<10;i++){
        cout << num[i] << endl;
    }
    
    
    return 0;
}
