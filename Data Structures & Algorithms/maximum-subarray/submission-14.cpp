class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    
        int n=nums.size();
       
     
        int sum=0;
        int b=nums[0];
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            b=max(sum,b);
            if(sum<0)
            {
                sum=0;
            }
        }
return b;
    }
};
