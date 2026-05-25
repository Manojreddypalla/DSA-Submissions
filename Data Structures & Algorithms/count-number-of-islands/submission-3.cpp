class Solution {
    void dfs(int r,int c,vector<vector<char>>& grid)
    {
        int row =grid.size();
        int cols=grid[0].size();

        if(r<0||c<0||r>=row||c>=cols||grid[r][c]=='0')
        {
            return;
        }

        // mark visited 
        grid[r][c]='0';
        int dr[4]={-1,1,0,0};
        int dc[4]={0,0,-1,1};
        for(int i=0;i<4;i++)
        {
            int nr=r+dr[i];
            int nc = c+dc[i];
            dfs(nr,nc,grid);
        }






    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int row=grid.size();
        int cols=grid[0].size();
        for(int r=0;r<row;r++)
        {
            for(int c=0;c<cols;c++)
            {
                if(grid[r][c]=='1')
                {
                    count ++;
                    dfs(r,c,grid);
                }
            }
        }
        return count;
    }
};
