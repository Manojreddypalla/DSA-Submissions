class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();

        vector<int> result(n, 0);

        for(int i = 0; i < n; i++) {

            int count = 0;

            for(int j = i + 1; j < n; j++) {

                count++;

                if(temperatures[j] > temperatures[i]) {
                    result[i] = count;
                    break;
                }
            }
        }

        return result;
    }
};