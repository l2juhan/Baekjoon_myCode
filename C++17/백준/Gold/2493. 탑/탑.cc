#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> towers(n);  // 탑 높이 저장
    vector<int> answer(n);  // 정답 배열
    stack<pair<int, int>> s; // (탑의 높이, 인덱스)를 저장할 스택

    for (int i = 0; i < n; i++) {
        cin >> towers[i];

        // 현재 탑보다 낮은 탑들은 수신 불가능 → pop
        while (!s.empty() && s.top().first < towers[i]) {
            s.pop();
        }

        // 스택이 비어 있다면 신호를 받을 탑이 없음 → 0 저장
        if (s.empty()) {
            answer[i] = 0;
        } else {
            answer[i] = s.top().second + 1; // 1-based index 저장
        }

        // 현재 탑을 스택에 push
        s.push({towers[i], i});
    }

    // 결과 출력
    for (int i = 0; i < n; i++) {
        cout << answer[i] << " ";
    }
}
