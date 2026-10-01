#include <string>
#include <vector>

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
    int MOD = 1000000007;
    vector<vector<int>> dp(n, vector<int>(m, 0));
    vector<vector<bool>> puddle(n, vector<bool>(m, false));
    for (auto& p : puddles)
        puddle[p[1]-1][p[0]-1] = true;
    dp[0][0] = 1;
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < m; ++x) {
            if (puddle[y][x]) { dp[y][x] = 0; continue; }
            if (y > 0) dp[y][x] = (dp[y][x] + dp[y-1][x]) % MOD;
            if (x > 0) dp[y][x] = (dp[y][x] + dp[y][x-1]) % MOD;
        }
    }
    return dp[n-1][m-1];
}