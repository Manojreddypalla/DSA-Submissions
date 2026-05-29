class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int> mp;
       vector<pair<int,int>> p;
       vector<int> res;
       for(auto m:nums){
        mp[m]++;
       }
       for(auto n:mp)
       {
        p.push_back({n.second,n.first});
       }
       sort(p.rbegin(),p.rend());
       for(int i=0;i<k;i++)
       {
        res.push_back(p[i].second);

       }
       return res;

    }
};
