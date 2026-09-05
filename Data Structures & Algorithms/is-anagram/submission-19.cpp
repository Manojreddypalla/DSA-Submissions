class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }

        unordered_map<char,int>mm1;
        unordered_map<char,int>mm2;
        for(int i=0;i<s.size();i++)
        {
            mm1[s[i]]++;
            mm2[t[i]]++;
        }

        return mm1==mm2;
    }
};
