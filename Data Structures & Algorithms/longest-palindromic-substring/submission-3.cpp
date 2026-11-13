class Solution {
    int expand(const string& s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;
    }

public:
    string longestPalindrome(string s) {
        int start = 0, maxLen = 0;
        for (int i = 0; i < s.size(); i++) {
            int len = max(expand(s, i, i), expand(s, i, i + 1));
            if (len > maxLen) {
                maxLen = len;
                start = i - (len - 1) / 2;
            }
        }
        return s.substr(start, maxLen);
    }
};