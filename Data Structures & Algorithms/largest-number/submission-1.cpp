class Solution {
public:
     static bool cmp(string a,string b)
     {
        return a+b>b+a;
     }
    string largestNumber(vector<int>& nums) 
    {
        vector<string>arr;
        for(auto num:nums)
        {
            arr.push_back(to_string(num));
        }
        sort(arr.begin(),arr.end(),cmp);
        if(arr[0]=="0")
        {
            return "0";
        }

        string ans="";
        for(auto nn:arr)
        {
            ans+=nn;
        }
        return ans;
    }
};