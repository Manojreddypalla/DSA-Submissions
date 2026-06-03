

class Solution {
public:
    int solve(int n,vector<int>&nums,vector<int> & dp)
    {
        if(n==0)
        {
            return nums[0];
        }
        if(n<0)
        {
            return 0;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }

        int take=nums[n]+solve(n-2,nums,dp);
        int nottake=solve(n-1,nums,dp);
        return dp[n]=max(take,nottake);

    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        vector<int> t1(nums.begin(),nums.end()-1);
        vector<int>t2(nums.begin()+1,nums.end());
        vector<int> dp1(t1.size(),-1);
        vector<int>dp2(t2.size(),-1);

        int ans1=solve(t1.size()-1,t1,dp1);
        int ans2=solve(t2.size()-1,t2,dp2);

        return max(ans1,ans2);
        
       
    }
};
