class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[256] = {0};
        
        int left = 0;
        int right = 0;
        int maxLen = 0;

        while (right < s.length()) {
            hash[s[right]]++;

            while (hash[s[right]] > 1) {
                hash[s[left]]--;
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
            right++;
        }

        return maxLen;
    }
};