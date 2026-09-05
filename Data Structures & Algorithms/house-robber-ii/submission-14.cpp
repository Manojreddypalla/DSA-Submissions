class Solution {
public:
    int solve(int n,vector<int>&nums,vector<int>&dp)
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
        int run1=nums[n]+solve(n-2,nums,dp);// we are doing it in backward direction
        int run2=solve(n-1,nums,dp);
        return dp[n]=max(run1,run2);
    }
    int rob(vector<int>& nums) {
       int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        
        vector<int>run1(nums.begin(),nums.end()-1);
        vector<int>run2(nums.begin()+1,nums.end());
        //we are gonna do 2 dp tooo hhere 
        vector<int>dp1(run1.size(),-1);
        vector<int>dp2(run2.size(),-1);

        int rob1=solve(run1.size()-1,run1,dp1); 
        //-1 as size is not same number as last index as index starts from 0 to n-1 even so we have n elements wow 
        int rob2=solve(run2.size()-1,run2,dp2);
        return max(rob1,rob2);
        
    }
};
