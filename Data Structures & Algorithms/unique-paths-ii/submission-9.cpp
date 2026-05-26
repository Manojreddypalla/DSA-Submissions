class Solution {
public:
   
    int solve(int m, int n, vector<vector<int>>& grid,map<pair<int,int>,int>&memo)
    {
        if(m==0 || n==0)
        {
            return 0;
        }
        if(grid[m-1][n-1]==1)
        {
        
            return 0;
        }
        if(m==1 && n==1)
        {
            return 1;
        }
        
        if(memo.count({m,n}))
        {
            return memo[{m,n}];

        }

        memo[{m,n}]=solve(m-1,n,grid,memo)+solve(m,n-1,grid,memo);
        return memo[{m,n}];
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        map<pair<int,int>,int> memo;
        return solve(m,n,obstacleGrid,memo);  
        
    }
};