class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int current=0;
        int next=0;


        for(int i=0;i<n;i++)
        {
            if(i>next)
            {
                return false;
            }
            current=i+nums[i];
            next =max(next,current);

        }
    return true;
        
        
    }
};
