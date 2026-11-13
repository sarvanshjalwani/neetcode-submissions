class Solution {
    int expand(const string& s, int left, int right) {
        int count = 0;
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }
        return count;
    }

public:
    int countSubstrings(string s) {
        int total = 0;
        for (int i = 0; i < s.size(); i++) {
            total += expand(s, i, i);     // Odd-length palindromes
            total += expand(s, i, i + 1); // Even-length palindromes
        }
        return total;
    }
};