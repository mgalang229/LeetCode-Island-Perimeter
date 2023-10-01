class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int p = 0;
        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};
        for (int i = 0; i < n; i++) {
            int m = grid[i].size();
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    for (int k = 0; k < 4; k++) {
                        int new_row = i + dx[k];
                        int new_col = j + dy[k];
                        if (0 <= new_row && new_row < n && 0 <= new_col && new_col < m)
                            p += (grid[new_row][new_col] == 0);
                        p += (new_row == -1 || new_row == n);
                        p += (new_col == -1 || new_col == m);
                    }
                }
            }
        }
        return p;
    }
};
