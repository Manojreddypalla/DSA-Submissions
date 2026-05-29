#include<cstring>
class Solution {
public:
    int dp[1001][2];
    int solve(int i,bool buy,vector<int>&prices)
    {
        if(i>=prices.size())
        {
            return 0;
        }
        if(dp[i][buy]!=-1)
        {
            return dp[i][buy];
        }
        // buying
        if(buy)
        {
            int buying=-prices[i]+solve(i+1,false,prices);
            int hold=solve(i+1,true,prices);
            return dp[i][buy]=max(buying,hold);
        }
        else{
            int selling_shit=+prices[i]+solve(i+2,true,prices);
            int holding_shit=solve(i+1,false,prices);
             return dp[i][buy]=max(selling_shit,holding_shit);

        }
       

    }










    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return solve(0,true,prices);
        
    }
};
