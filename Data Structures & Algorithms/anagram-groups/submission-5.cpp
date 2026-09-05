class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto m:strs)
        {
            string ss=m;
            sort(ss.begin(),ss.end());
            mp[ss].push_back(m);
            
        }

        vector<vector<string>> st;
        for(auto mm:mp){
            st.push_back(mm.second);
        }
        return st;
    }
};
