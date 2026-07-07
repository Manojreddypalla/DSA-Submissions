class Solution {
public:
    
    int areafinder(vector<vector<int>>& grid,int i,int j)
    {
        int row,col;
        row=grid.size();
        col=grid[0].size();
        if(i<0||i>=row||j<0||j>=col)
        {
            return 0;
        }
        if(grid[i][j]!=1)
        {
            return 0;
        }
        grid[i][j]=2;
        int area=1;

        area+=areafinder(grid,i+1,j);
        area+=areafinder(grid,i-1,j);
        area+=areafinder(grid,i,j+1);
        area+=areafinder(grid,i,j-1);

        return area;


    }


    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int i,j,row,col,maxarea=0;
        row=grid.size();
        col=grid[0].size();
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(grid[i][j]==1)
                {
                    int area =areafinder(grid,i,j);
                    maxarea=max(maxarea,area);

                }
            }
        }
        return maxarea;
    }
};
