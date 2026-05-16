class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        for(auto i:nums)
        {
            count[i]++;
        }
        vector<pair<int,int>> man;
        for(auto i:count)
        {
            man.push_back({i.second,i.first});
        }
        sort(man.rbegin(),man.rend());
        vector<int> results;
        for(int i=0;i<k;i++)
        {
            results.push_back(man[i].second);
        }
        return results;

    }
};
