#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(string word) {
    const string w = "AEIOU";
    const int weight[5]={781,156,31,6,1};
    int ans=0;
    for(int i=0; i<(int)word.size();++i) {
        int k=w.find(word[i]);
        ans+=k*weight[i]+1;
    }
    return ans;
}