class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> rowVec(row, -1);
        vector<int> colVec(col, -1);
        for(int i = 0; i < row; i++){
            for(int j = 0; j<col; j++){
                if(matrix[i][j]==0){
                    rowVec[i] = (matrix[i][j]==0) ? 1 : 0;
                    colVec[j] = (matrix[i][j]==0) ? 1 : 0;
                }
            }
        }

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(rowVec[i] == 1 || colVec[j] == 1) matrix[i][j] = 0;
            }
        }
    }
};