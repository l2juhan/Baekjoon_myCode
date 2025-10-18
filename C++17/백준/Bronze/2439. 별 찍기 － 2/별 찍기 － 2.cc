#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        string s;
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            s+="*";
        }
        
        printf("%s\n",s.c_str());
        s = "";
    }
    
    return 0;
}
