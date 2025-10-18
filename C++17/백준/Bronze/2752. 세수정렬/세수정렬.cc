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
    
    int a[3];
    
    for(int i=0;i<3;i++){
        cin >> a[i];
    }
    for(int i=0;i<2;i++){
        for(int j=i+1;j<3;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout << a[0] << " " << a[1] << " " << a[2];
        return 0;
    }
         
  

