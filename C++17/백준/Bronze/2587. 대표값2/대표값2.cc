#include <iostream>
#include <cstdlib>
#include <string>//stoi(string to num),to_string(num to string)
#include <vector>
#include <cmath>
#include <algorithm>
#include <stack>
#include <unordered_map>

using namespace std;


int main(int argc, char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int a[5];
    
    for(int i=0;i<5;i++){
        cin >> a[i];
    }
    
    sort(a,a+5);
    
    cout << (a[0]+a[1]+a[2]+a[3]+a[4])/5 << endl << a[2];
    
    return 0;
    }
         
  

