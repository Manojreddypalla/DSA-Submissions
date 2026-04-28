class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res=0;
       for(int i=0;i<s.size();i++)
       {
        unordered_set<char> cset;
        for(int j=i;j<s.size();j++)
        {
            if(cset.find(s[j])!=cset.end())// if it is there in the set then it skips if it is not there in the set then it is inserted 
            {
                break;
            }
            cset.insert(s[j]);
        }
        res=max(res,(int)cset.size());
       }
       return res;


    }
};
