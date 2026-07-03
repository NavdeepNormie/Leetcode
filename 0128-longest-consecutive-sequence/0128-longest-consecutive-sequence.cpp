class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;

        unordered_set<int> st;

        // Insert all elements into the set
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        int longest = 1;

        // Traverse the set
        for (auto it : st) {

            // Check if it is the start of a sequence
            if (st.find(it - 1) == st.end()) {

                int cnt = 1;
                int x = it;

                // Count consecutive numbers
                while (st.find(x + 1) != st.end()) {
                    x++;
                    cnt++;
                }

                longest = max(longest, cnt);
            }
        }

        return longest;
    }
};