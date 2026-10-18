class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> m(nums.begin(),nums.end());
        if(m.size()!=nums.size())
        {
            return true;
        }
        return false;
    }
};