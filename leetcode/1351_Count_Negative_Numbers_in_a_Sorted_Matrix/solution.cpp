class Solution {
private:
    int firstSolution(vector<vector<int>>& grid) {
        int negativeNumberCnts = 0;
        for (int r = 0, m = grid.size(); r < m; ++r) {
            for (int c = 0, n = grid[r].size(); c < n; ++c) {
                if (grid[r][c] >= 0) continue;
                ++negativeNumberCnts;
            }
        }
        return negativeNumberCnts;
    }

public:
    int countNegatives(vector<vector<int>>& grid) {
        return firstSolution(grid);
    }
};