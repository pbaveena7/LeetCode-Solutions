class Solution {
public:
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n = cost.size();

        vector<int> dp(n + 1, 1e9);
        dp[0] = 0;

        for (int i = 0; i < n; i++) {
            vector<int> ndp = dp;

            for (int j = 0; j <= n; j++) {
                int nj = min(n, j + time[i] + 1);
                ndp[nj] = min(ndp[nj], dp[j] + cost[i]);
            }

            dp = ndp;
        }

        return dp[n];
    }
};