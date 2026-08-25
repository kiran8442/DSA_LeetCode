class Solution {
public:
    bool Issafe(int row, int column, int n, vector<string> &board)
    {
        //Check Vertically
        for(int i = 0; i < n; ++i)
        {
            if(board[i][column] == 'Q')
                return false;
        }
        //Check Horizontally
        for(int i = 0; i < n; ++i)
        {
            if(board[row][i] == 'Q')
                return false;
        }
        //Right upper diagonal
        for(int i = row, j = column; i >= 0 && j >= 0; i--, j--)
        {
            if(board[i][j] == 'Q')
                return false;
        }
        //Left upper diagonal
        for(int i = row, j = column; i >= 0 && j < n; i--, j++)
        {
            if(board[i][j] == 'Q')
                return false;
        }
        return true;
    }
    void nQueens(int row, int n, vector<string> &board, vector<vector<string>> &ans)
    {
        if( row == n)
        {
            ans.push_back(board);
            return;
        }
        for(int j = 0; j < n; ++j)
        {
            if(Issafe(row, j, n, board))
            {
                board[row][j] = 'Q';
                nQueens(row+1, n, board, ans);
                board[row][j] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        vector<vector<string>> ans;

        nQueens(0, n, board, ans);
        return ans;
    }
};