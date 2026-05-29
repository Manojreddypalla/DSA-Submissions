class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s=nums.size();
        vector<int> res(s);
        for(int i=0;i<s;i++)
        {  
            int p=1;
         for(int j=0;j<s;j++)
         {
            if(i!=j)
            {
                p*=nums[j];
            }
         }
         res[i]=p;

         


        }
        return res;

    }
};
  