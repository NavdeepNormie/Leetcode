class Solution {
public:
    bool checkValidString(string s) {
        int low = 0;
        int high = 0;

        for (char c : s) {

            if (c == '(') {
                low++;
                high++;
            }

            else if (c == ')') {
                low--;
                high--;
            }

            else { // '*'
                low--;
                high++;
            }

            // Even our minimum cannot go below 0
            low = max(low, 0);

            // If even the maximum is negative,
            // there are too many ')'
            if (high < 0)
                return false;
        }

        return low == 0;
    }
};