#include <bits/stdc++.h>
using namespace std;
// 더 좋은 풀이

int solution(int cacheSize, vector<string> cities) {
    if (cacheSize == 0) return 5 * (int)cities.size();

    list<string> lru;  // front = 가장 최근 사용
    unordered_map<string, list<string>::iterator> pos;
    int answer = 0;

    for (auto& s : cities) {
        for (auto& c : s) c = tolower((unsigned char)c);

        auto it = pos.find(s);
        if (it != pos.end()) {
            lru.splice(lru.begin(), lru, it->second);  // O(1) 이동, iterator 유효 유지
            answer += 1;
        } else {
            if ((int)lru.size() == cacheSize) {
                pos.erase(lru.back());
                lru.pop_back();
            }
            lru.push_front(s);
            pos[s] = lru.begin();
            answer += 5;
        }
    }
    return answer;
}