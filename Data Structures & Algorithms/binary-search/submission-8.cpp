class Solution {
public:
    int search(vector<int>& nums, int target) {
     int low =0;
     int high=nums.size()-1;
     int m=(low+high)/2;
     if(nums[m]==target)
     {
        return m;
     }
     while(low<=high)
     {
        m=(low+high)/2;
          if(nums[m] == target)
            {
                return m;
            }
        if(target>nums[m])
        {
            low=m+1;

        }
        else{
            high=m-1;
        }



     }
     return -1;
     
  }
};
