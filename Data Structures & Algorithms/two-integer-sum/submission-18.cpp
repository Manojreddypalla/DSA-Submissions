// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i=0;i<nums.size();i++)
//         {
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[i]+nums[j]==target)
//                 {
//                     return {i,j};
//                 }
//             }
//         }
       
//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> m;
       for(int i=0;i<nums.size();i++)
       {
        int t=target-nums[i];
        if(m.count(t))
        {
                return {m[t],i};
        }

        m[nums[i]]=i;
       }

return {};
       
    }
};
