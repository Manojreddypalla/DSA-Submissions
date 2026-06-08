class Solution {
public:
    vector<vector<int>>ans;
    void solve(int j,vector<int>&temp,vector<int>&nums,int target)
    {
        if(target==0)
        {
            ans.push_back(temp);

        }
        if(target<0)
        {
            return ;

        }
        for(int i=j;i<nums.size();i++)
        {
            temp.push_back(nums[i]);
            solve(i,temp,nums,target-nums[i]);
            temp.pop_back();

        }
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> temp;
        solve(0,temp,nums,target);
        return ans;
        
    }
};
