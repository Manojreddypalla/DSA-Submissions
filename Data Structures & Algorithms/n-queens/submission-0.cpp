class Solution {
public:

    vector<vector<string>> ans;

    void solve(int row,
               int n,
               vector<string>& board,
               vector<int>& col,
               vector<int>& diag1,
               vector<int>& diag2)
    {
        // ALL QUEENS PLACED
        if(row == n)
        {
            ans.push_back(board);
            return;
        }

        // TRY EVERY COLUMN
        for(int c = 0; c < n; c++)
        {
            // SAFE POSITION?
            if(col[c] == 0 &&
               diag1[row - c + n] == 0 &&
               diag2[row + c] == 0)
            {
                // PLACE QUEEN
                board[row][c] = 'Q';

                col[c] = 1;
                diag1[row - c + n] = 1;
                diag2[row + c] = 1;

                // GO TO NEXT ROW
                solve(row + 1,
                      n,
                      board,
                      col,
                      diag1,
                      diag2);

                // REMOVE QUEEN (BACKTRACK)
                board[row][c] = '.';

                col[c] = 0;
                diag1[row - c + n] = 0;
                diag2[row + c] = 0;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {

        vector<vector<string>> ans;

        vector<string> board(n, string(n, '.'));

        vector<int> col(n, 0);

        vector<int> diag1(2 * n, 0);
        vector<int> diag2(2 * n, 0);

        solve(0,
              n,
              board,
              col,
              diag1,
              diag2);

        return this->ans;
    }
};