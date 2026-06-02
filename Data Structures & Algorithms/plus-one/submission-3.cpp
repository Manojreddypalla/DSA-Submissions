class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long long  numbers =0;
        for (int n:digits)
        {
          numbers=numbers*10+n;            
        }
        numbers=numbers+1;
        vector<int> ans;
        while(numbers>0)
        {
            ans.push_back(numbers%10);
            numbers=numbers/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};
