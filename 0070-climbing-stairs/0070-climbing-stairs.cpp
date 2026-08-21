class Solution {
public:
    int climbStairs(int n, vector<int>& dp) {

        // Base case
        if (n == 0 || n == 1)
            return 1;

        // Already calculated?
        if (dp[n] != -1)
            return dp[n];

        // Recursion + store the answer
        dp[n] = climbStairs(n - 1, dp) + climbStairs(n - 2, dp);

        return dp[n];
    }

    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);

        return climbStairs(n, dp);
    }
};