class Solution {
public:
    int m = 1000000000;
    vector<int> dp;

    int solve(const vector<int>& coins, int amount)
    {
        if (amount == 0)
            return 0;

        if (amount < 0)
            return m;

        if (dp[amount] != -1)
            return dp[amount];

        int mini = m;

        for (auto c : coins)
        {
            int rem = amount - c;

            mini = min(mini, 1 + solve(coins, rem));
        }

        return dp[amount] = mini;
    }

    int coinChange(vector<int>& coins, int amount)
    {
        dp.resize(amount + 1, -1);

        int ans = solve(coins, amount);

        if (ans >= m)
            return -1;

        return ans;
    }
};