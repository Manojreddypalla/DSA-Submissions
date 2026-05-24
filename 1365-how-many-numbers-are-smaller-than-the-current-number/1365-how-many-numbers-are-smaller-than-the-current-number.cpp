class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int> results;
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=0;j<n;j++)
            {
                if(i==j){
                    continue;
                }
                if(nums[i]>nums[j])
                {
                    c+=1;
                }

            }
             results.push_back(c);
        }
        return results;
    }
};