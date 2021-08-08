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

    int fourthSolution(vector<vector<int>>& grid, int curMs, int curMe, int curNs, int curNe) {
        if (grid[curMs][curNs] < 0)
            return (curMe - curMs) * (curNe - curNs);

        if (grid[curMe - 1][curNe - 1] >= 0)
            return 0;

        int nextMs = curMs;
        for (int r = curMs; r < curMe && grid[r][curNe - 1] >= 0; nextMs = ++r);

        int nextNs = curNs;
        for (int c = curNs; c < curNe && grid[curMe - 1][c] >= 0; nextNs = ++c);

        int nextMe = curMe;
        for (int r = curMe; r > curMs && grid[r - 1][curNs] < 0; nextMe = --r);

        int nextNe = curNe;
        for (int c = curNe; c > curNs && grid[curMs][c - 1] < 0; nextNe = --c);

        return (curNe - nextNe) * (curMe - curMs) +
            (curMe - nextMe) * (curNe - curNs) -
            (curMe - nextMe) * (curNe - nextNe) +
            fourthSolution(grid, nextMs, nextMe, nextNs, nextNe);
    }

public:
    int countNegatives(vector<vector<int>>& grid) {
        //return firstSolution(grid);
        //return secondSolution(grid);
        //return thirdSolution(grid);
        return fourthSolution(grid, 0, grid.size(), 0, grid[0].size());
    }
};