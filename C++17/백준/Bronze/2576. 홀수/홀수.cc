#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <cmath>

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

int main(){
    ios_base::sync_with_stdio(false);
    
    int sum=0;
    int min=100;
    for(int i=0;i<7;i++){
        int n;
        cin >> n;
        if(n%2!=0&&min>n){min=n;}
        if(n%2!=0)sum+=n;
    }
    if(min==100){cout << -1; return 0;}
    cout << sum << endl << min;
    return 0;
}
