class Solution {
public:
    vector<vector<int>> ans;
    void solve(int start,int target,vector<int>& nums,vector<int>& temp)
    {
        if (target ==0)
        {
            ans.push_back(temp);
            return;
        }
        if(target<0)
        {
            return;
        }
        for(int i=start;i<nums.size();i++)
        {
            temp.push_back(nums[i]);
            solve(i,target-nums[i],nums,temp);
            temp.pop_back();
        }

    }







    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> temp;
        solve(0,target,nums,temp);
        return ans;
    }
};
