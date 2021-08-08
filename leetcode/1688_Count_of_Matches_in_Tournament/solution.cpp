class Solution {
private:
    int firstSolution(int n) {
        if (n <= 2)
            return n/2;

        int currRoundMatchesCnts = n / 2;
        return currRoundMatchesCnts + numberOfMatches(currRoundMatchesCnts + n % 2);
    }
    int secondSolution(int n) {
        int matchesCnts = 0;
        while (n > 1) {
            matchesCnts += (n / 2);
            n = (n / 2) + (n % 2);
        }
        return matchesCnts;
    }
    int thirdSolution(n) {
        return n - 1;
    }
public:
    int numberOfMatches(int n) {
        //return firstSolution(n);
        //return secondSolution(n);
        return thirdSolution(n);
    }
};
