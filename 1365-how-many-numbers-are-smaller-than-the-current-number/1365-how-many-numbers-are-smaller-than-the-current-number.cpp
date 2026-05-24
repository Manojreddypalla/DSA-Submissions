class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       vector<int> temp;
       temp=nums;
       sort(temp.begin(),temp.end());

       unordered_map<int,int> mp;
       vector<int> res;
       for(int i=0;i<nums.size();i++)
       {
        if(!mp.count(temp[i])) {
          mp[temp[i]] = i;
         }
        

       }
        for(int i = 0; i < nums.size(); i++) {
            res.push_back(mp[nums[i]]);
        }


       return res;


    }
};