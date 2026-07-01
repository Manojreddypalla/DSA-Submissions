class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto row:matrix)
        {
            for(auto i:row)
            {
                if(i== target)

                {
                    return true;
                }
            }
        }
        return false;
    }
};
