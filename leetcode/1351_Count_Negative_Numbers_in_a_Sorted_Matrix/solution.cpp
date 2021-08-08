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

    int secondSolution(vector<vector<int>>& grid) {
        int negativeNumberCnts = 0;
        int m = grid.size(), n = grid[0].size();

        for (int r = 0; r < m; ++r) {
            for (int c = 0; c < n; ++c) {
                if (grid[r][c] >= 0) continue;

                negativeNumberCnts += ((n - c) * (m - r));
                n = c;
            }
        }
        return negativeNumberCnts;
    }

    int thirdSolution(vector<vector<int>>& grid) {
        int negativeNumberCnts = 0;
        int m = grid.size(), n = grid[0].size();

        for (int row = 0; row < m; ++row) {
            if (n < 1) break;
            int right = n - 1;
            if (grid[row][right] >= 0) continue;

            int left = 0;
            while (left <= right) {
                if (grid[row][left] < 0) break;

                int med = (left + right) / 2;
                if (grid[row][med] < 0)
                    right = med - 1;
                else
                    left = med + 1;
            }

            negativeNumberCnts += ((n - left) * (m - row));
            n = left;
        }
        return negativeNumberCnts;
    }

public:
    int countNegatives(vector<vector<int>>& grid) {
        //return firstSolution(grid);
        //return secondSolution(grid);
        return thirdSolution(grid);
    }
};