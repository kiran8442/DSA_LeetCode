class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> Output(n, vector<int>(n));
        for(int i = n -1, k = 0; i >= 0 && k < n; i--,k++){
            for(int j = 0, s = 0; j < n && s < n;j++,s++){
                Output[j][i] = matrix[k][s];
            }
        }
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n ;j++)
                matrix[i][j] = Output[i][j];
    }
};