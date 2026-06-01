// class Solution {
// public:
//     vector<int> dailyTemperatures(vector<int>& temperatures) {

//         int n = temperatures.size();

//         vector<int> result(n, 0);

//         for(int i = 0; i < n; i++) {

//             int count = 0;

//             for(int j = i + 1; j < n; j++) {

//                 count++;

//                 if(temperatures[j] > temperatures[i]) {
//                     result[i] = count;
//                     break;
//                 }
//             }
//         }

//         return result;
//     }
// };


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();

        // default answer = 0
        vector<int> ans(n, 0);

        // stores indices of unresolved days
        stack<int> st;

        for(int i = 0; i < n; i++) {

            // current temperature resolves
            // previous colder waiting days
            while(!st.empty() &&
                  temperatures[i] > temperatures[st.top()]) {

                int prevIndex = st.top();
                st.pop();

                // distance between current day
                // and resolved previous day
                ans[prevIndex] = i - prevIndex;
            }

            // current day becomes unresolved
            // and waits for future warmer day
            st.push(i);
        }

        return ans;
    }
};
