// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> dp(n);

//         dp[0]=nums[0];



//         for(int i = 1 ; i < n ; i++)
//         {
//             int take=nums[i];
        
//         if(i>1)
//         {
//             take+=dp[i-2];
//         }

//         int notTaken=dp[i-1];
//         dp[i]=max(take,notTaken);

//         }
//         return dp[n-1];
//     }
// };


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
        vector<int> dp(n,-1);
        return solve(n-1,nums,dp);
       
    }
};
