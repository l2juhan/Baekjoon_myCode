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
    
    for(int i=0;i<3;i++){
        int c=0;
        char a[5] = {'E','A','B','C','D'};
        for(int j=0;j<4;j++){
            int n;
            cin >> n;
            if(n==0) c++;
        }
            cout << a[c] << endl;
    }
    
    return 0;
}
