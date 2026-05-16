class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxs = nums[0];

        for(int l = 0; l < nums.size(); l++)
        {
            int sum = 0;

            for(int r = l; r < nums.size(); r++)
            {
                sum += nums[r];

                maxs = max(maxs, sum);
            }
        }

        return maxs;
    }
};