// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int res=0;
//         unordered_set<int> store(nums.begin(),nums.end());
//         for(int num:store)
//         {
//            int length=0,curr=num;
//            while(store.find(curr)!=store.end())
//            {
//            curr ++;
//            length++;
        
//            }
//             res=max(res,length);

//         }
        
// return res;
//     }
// };



class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    unordered_set<int>s(nums.begin(),nums.end());
    int res=0;
    for(auto m:s)
    {
        int length =0 , current = m;
        while(s.find(current)!=s.end())
        {
            length++;
            current++;
        }
        res=max(res,length);
    }
     return res;












    }
};


