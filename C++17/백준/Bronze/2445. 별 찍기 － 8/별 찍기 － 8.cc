#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <cmath>

using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++) cout << "*";
        for(int j=0;(j<=2*(n-i)-1);j++) cout << " ";
        for(int j=0;j<i;j++) cout << "*";
        cout << endl;
    }
    //for(int i=0;i<2*n;i++) cout << "*";
    //cout << endl;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<n-i;j++) cout << "*";
        for(int j=0;j<=2*i-1;j++) cout << " ";
        for(int j=0;j<n-i;j++) cout << "*";
        cout << endl;
    }
    
    return 0;
}
