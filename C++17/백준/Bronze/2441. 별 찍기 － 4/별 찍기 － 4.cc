#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i =n;i>0;i--){
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        for(int j =0;j<i;j++){
            cout << "*";
        }
        cout << "\n";
    }
    
    return 0;
}
