class Solution {
public:
    vector<int>dp;
    int solve(vector<int>coins,int amount)
    {
        if(amount ==0){
            return 0;
        }
        if(amount<0)
        {
            return 1e9;
        }
        if(dp[amount]!=-1)
        {
            return dp[amount];
        }
        int mini =1e9;
        for(auto c:coins)
        {
            int rem=amount-c;
            mini=min(1+solve(coins,rem),mini);
        }
        return dp[amount]=mini;
    }

    int coinChange(vector<int>& coins, int amount) {

        dp.resize(amount+1,-1);
        int ans=solve(coins,amount);
        if(ans>=1e9)
        return -1;
        return ans;

        
    }
};
