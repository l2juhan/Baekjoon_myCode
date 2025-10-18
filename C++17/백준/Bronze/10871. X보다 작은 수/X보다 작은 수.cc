#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <cmath>

using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    
    int num,st;
    cin >> num >> st;
    for(int i=1;i<=num;i++){
        int a;
        cin >> a;
        if(a<st) cout << a << " ";
    }
    return 0;
}
