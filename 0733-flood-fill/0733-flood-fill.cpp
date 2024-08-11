class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int st) {
        int n = image.size();
        int m = image[0].size();
        image[sr][sc] = color;
        for (int delrow = -1; delrow <= 1; delrow++) {
            for (int delcol = -1; delcol <= 1; delcol++) {
                if (abs(delrow) == abs(delcol)) {
                    continue;
                }
                int nrow = sr + delrow;
                int ncol = sc + delcol;
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                    image[nrow][ncol] == st) {
                    floodFill(image, nrow, ncol, color);
                }
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        if (image[sr][sc] == color) {
            return image;
        }
        int st = image[sr][sc];
        dfs(image, sr, sc, color, st);
        return image;
    }
};