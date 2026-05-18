// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int left=0,right=numbers.size()-1;
//         while(left<right)
//         {
//             int sum=numbers[left]+numbers[right];
//             if(sum==target)
//             {
//                 return{left+1,right+1};
//             }
//             else if (sum<target)
//             {
//                 left++;
//             }
//             else{
//                 right--;
//             }
//         }
//         return {};
       
//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       
       int l=0;
       int r=numbers.size()-1;
       while(l<r)
       {
        int sum =numbers[l]+numbers[r];
        if(sum==target)
        {
            return {l+1,r+1};
        }

        if(sum>target)
        {
            r--;
        }
        else if (sum<target)
        {
            l++;
        }
       }
    }
};



























