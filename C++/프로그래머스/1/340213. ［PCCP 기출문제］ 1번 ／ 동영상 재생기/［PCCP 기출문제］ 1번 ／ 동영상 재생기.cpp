#include <string>
#include <vector>

using namespace std;
// video_len = 영상 길이, pos = 재생위치, op_start = 오프닝 시작, op_end = 오프닝 끝, commands = 사용자 입력들
string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    auto toSec = [](string s){
        return stoi(s.substr(0,2)) * 60 + stoi(s.substr(3,2));
    };
    int videoLen = toSec(video_len);
    int ppos = toSec(pos);
    int opStart = toSec(op_start);
    int opEnd = toSec(op_end);
    for(int i = 0; i < commands.size(); ++i){
        if(opStart<= ppos && ppos <= opEnd) ppos=opEnd;
        if(commands[i] == "prev"){
            if(ppos < 10) ppos=0;
            else {
                ppos-=10;
            }
            if(opStart<= ppos && ppos <= opEnd) ppos=opEnd;
        }
        else if(commands[i] == "next"){
            if(ppos > videoLen - 10)ppos=videoLen;
            else{
                ppos+=10;
            }
            if(opStart<= ppos && ppos <= opEnd) ppos=opEnd;
        }
    }
    auto toStr = [](int s){
        string mm = to_string(s/60);
        string ss = to_string(s%60);
        if(mm.size() < 2) mm = "0" + mm;
        if(ss.size() < 2) ss = "0" + ss;
        return mm + ":" + ss;
    };
    string answer = toStr(ppos);
    return answer;
}