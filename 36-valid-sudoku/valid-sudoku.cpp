class Solution {
public:
    bool issafe(vector<vector<char>>& board, int i_index, int j_index, const char val, int row, int col)
    {
        int i = 0;
        int j = 0;
        if(val == '.')
            return true;
        //Check Row j_index used
        for(i = 0; i < row; i++)
            if(board[i][j_index] == val && i != i_index)
                return false;
        //Check column i_index used
        for(j = 0; j < row; j++)
            if(board[i_index][j] == val && j != j_index)
                return false;
                
        // Find 3x3 box starting position
        int startRow = (i_index / 3) * 3;
        int startCol = (j_index / 3) * 3;
        
        for(int i = startRow;i < startRow+3; i++)
        {
            for(int j = startCol;j < startCol+3; j++)
            {
                if(i == i_index && j == j_index)
                    continue;
                if(board[i][j] == val)
                    return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int row = board.size();
        int col = board[0].size();
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(!issafe(board, i, j, board[i][j], row, col))
                    return false;
            }
        }
        return true;
    }
};