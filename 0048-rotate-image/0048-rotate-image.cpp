class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        // change matrix[i][j] to matrix[j][i], j will be increase from 0 to i
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < i; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse all the rows
        for (int i = 0; i < r; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};