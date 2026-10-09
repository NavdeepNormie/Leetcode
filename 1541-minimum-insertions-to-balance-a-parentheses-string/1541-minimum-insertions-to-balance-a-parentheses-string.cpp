class Solution {
public:
    int minInsertions(string s) {
        int insertions = 0;
        int need = 0;

        for (char c : s) {

            if (c == '(') {

                // An odd number of closing parentheses is needed.
                // Insert one ')' to make the requirement even.
                if (need % 2 == 1) {
                    insertions++;
                    need--;
                }

                // Every '(' requires two ')'
                need += 2;
            }

            else {

                need--;

                // We encountered an extra ')'
                if (need < 0) {
                    insertions++;
                    need = 1;
                }
            }
        }

        // Insert any closing parentheses still required.
        return insertions + need;
    }
};