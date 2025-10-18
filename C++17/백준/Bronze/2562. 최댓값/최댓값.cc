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

int main(){
    ios_base::sync_with_stdio(false);
    
    int arr[9];
    int max=0;
    int n=0;
    for(int i=0;i<9;i++) cin >> arr[i];
    for(int i=0;i<9;i++){
        if(max<arr[i]) {max=arr[i]; n=i+1;}
    }
    cout << max << endl << n;
    
    return 0;
}
