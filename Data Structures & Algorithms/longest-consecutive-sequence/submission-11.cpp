class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res=0;
        unordered_set<int> store(nums.begin(),nums.end());
        for(int num:store)
        {
           int length=0,curr=num;
           while(store.find(curr)!=store.end())
           {
           curr ++;
           length++;
        
           }
            res=max(res,length);

        }
        
return res;
    }
};
