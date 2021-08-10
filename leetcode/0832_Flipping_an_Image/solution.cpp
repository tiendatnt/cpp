class Solution {
private:
    vector<vector<int>> firstSolution(vector<vector<int>>& image) {
        int N = image.size();
        for (int row = 0; row < N; ++row) {
            for (int i = 0, j = N - 1; i <= j; ++i, --j) {
                if (image[row][i] == image[row][j]) {
                    image[row][j] = 1 - image[row][j];
                    image[row][i] = image[row][j];
                }
            }
        }
        return image;
    }
    vector<vector<int>> secondSolution(vector<vector<int>>& image) {
        for (auto& row : image) {
            reverse(row.begin(), row.end());
            for (int& ele : row) {
                ele = 1 - ele;
            }
        }
        return image;
    }

public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        //return firstSolution(image);
        return secondSolution(image);
    }
};
