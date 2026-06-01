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

    vector<int> ans;
    vector<int> temp;
    int n;

    int solve(int i, int j) {

        // out of bounds
        if(j >= n)
            return 0;

        // found warmer day
        if(temp[j] > temp[i])
            return j - i;

        // no warmer day ahead from j
        if(ans[j] == 0)
            return 0;

        // jump using already computed answer
        return solve(i, j + ans[j]);
    }

    vector<int> dailyTemperatures(vector<int>& temperatures) {

        temp = temperatures;
        n = temp.size();

        ans.resize(n, 0);

        // right to left
        for(int i = n - 2; i >= 0; i--) {

            ans[i] = solve(i, i + 1);
        }

        return ans;
    }
};