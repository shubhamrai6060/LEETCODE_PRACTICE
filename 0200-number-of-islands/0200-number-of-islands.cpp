class Solution {
public:

    void dfs(vector<vector<char>>& grid, int row, int col) {

        int rows = grid.size();
        int cols = grid[0].size();

       
        if (row < 0 || row >= rows ||
            col < 0 || col >= cols ||
            grid[row][col] == '0') {
            return;
        }

        grid[row][col] = '0';

      
        dfs(grid, row - 1, col);

      
        dfs(grid, row + 1, col);

      
        dfs(grid, row, col - 1);

       
        dfs(grid, row, col + 1);
    }

    int numIslands(vector<vector<char>>& grid) {

        int count = 0;

        for (int i = 0; i < grid.size(); i++) {

            for (int j = 0; j < grid[0].size(); j++) {

                if (grid[i][j] == '1') {

                    count++;

                    dfs(grid, i, j);
                }
            }
        }

        return count;
    }
};