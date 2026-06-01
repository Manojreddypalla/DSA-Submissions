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
// class Solution {
// public:

//     vector<int> topKFrequent(vector<int>& nums, int k) {

//         // {number, frequency}
//         vector<pair<int,int>> p;

//         for(int num : nums) {

//             bool found = false;

//             // search if number already exists
//             for(auto &pair : p) {

//                 if(pair.first == num) {

//                     pair.second++;
//                     found = true;
//                     break;
//                 }
//             }

//             // if number not found
//             if(!found) {
//                 p.push_back({num, 1});
//             }
//         }

//         // sort by frequency descending
//         sort(p.begin(), p.end(),
//             [](pair<int,int>& a, pair<int,int>& b) {
//                 return a.second > b.second;
//             });

//         vector<int> res;

//         // take top k numbers
//         for(int i = 0; i < k; i++) {
//             res.push_back(p[i].first);
//         }

//         return res;
//     }
// };