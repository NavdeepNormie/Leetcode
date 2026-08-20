class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int right = 0;

        int freq[26] = {0};
        int maxFreq = 0;
        int maxLen = 0;

        while (right < s.length()) {

            // Add current character to the window
            freq[s[right] - 'A']++;

            // Update maximum frequency
            maxFreq = max(maxFreq, freq[s[right] - 'A']);

            // Shrink the window if it needs too many replacements
            while ((right - left + 1) - maxFreq > k) {
                freq[s[left] - 'A']--;
                left++;
            }

            // Update answer
            maxLen = max(maxLen, right - left + 1);

            right++;
        }

        return maxLen;
    }
};