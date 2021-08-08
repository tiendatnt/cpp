class Solution {
private:
    int firstSolution(int n) {
        if (n <= 2)
            return n/2;

        int currRoundMatchesCnts = n / 2;
        return currRoundMatchesCnts + numberOfMatches(currRoundMatchesCnts + n % 2);
    }
public:
    int numberOfMatches(int n) {
        return firstSolution(n);
    }
};
