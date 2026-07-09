class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if (s.length() != t.length())
            return false;

        unordered_map<char, char> mp;

        for (int i = 0; i < s.length(); i++) {

            char original = s[i];
            char replacement = t[i];

            if (mp.find(original) == mp.end()) {

                bool used = false;

                for (auto it : mp) {
                    if (it.second == replacement) {
                        used = true;
                        break;
                    }
                }

                if (used)
                    return false;

                mp[original] = replacement;
            }
            else {

                if (mp[original] != replacement)
                    return false;
            }
        }

        return true;
    }
};