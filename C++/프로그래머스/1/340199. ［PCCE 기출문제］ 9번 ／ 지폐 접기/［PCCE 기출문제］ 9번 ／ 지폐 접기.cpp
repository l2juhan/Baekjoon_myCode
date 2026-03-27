#include <string>
#include <vector>

using namespace std;
// wallet = 지갑 길이, bill = 지폐 길이
int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
   
    int w1 = wallet[0]; int w2 = wallet[1];
    bool isDone = false;
    while(1){
        if(w1 >= bill[0] && w2 >= bill[1])break;
        else if(w1 >= bill[1] && w2 >= bill[0])break;
        else{
            ++answer;
            if(bill[0] > bill[1]) bill[0] = bill[0]/2;
            else bill[1] = bill[1]/2;
        }
    }
    return answer;
}