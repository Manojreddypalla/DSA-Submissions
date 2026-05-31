class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;

        for (int i = 0; i <= nums.size() - k; i++) {
            // Step 1: take window
            vector<int> temp;
            for (int j = i; j < i + k; j++) {
                temp.push_back(nums[j]);
            }

            // Step 2: sort the window
            sort(temp.begin(), temp.end());

            // Step 3: take max (last element)
            result.push_back(temp.back());
        }

        return result;
    }
};