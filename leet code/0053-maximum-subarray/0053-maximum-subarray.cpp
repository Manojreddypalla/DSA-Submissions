class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxs;
        int sum;

        for(int i=0;i<nums.size();i++)
        {
            sum=max(nums[i],sum+nums[i]);
            maxs=max(sum,maxs);
        }
        return maxs;


    }
};