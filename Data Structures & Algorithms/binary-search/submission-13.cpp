class Solution {
public:
    int search(vector<int>& nums, int target) {
       int l,m,h;
       l=0;
       h=nums.size()-1;
       m=(l+h)/2;
       if(nums[m]==target)
       {
        return m;
       }
       while(l<=h)
       {
        m=(l+h)/2;
        if(nums[m]==target)

        {
            return m;
        }
        if(target>nums[m])
        {
            l=m+1;
        }
        else{
            h=m-1;
        }




       }
       
       return -1;
    }
};
