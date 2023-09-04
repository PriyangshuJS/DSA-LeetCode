class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }

        int m = haystack.length();
        int n = needle.length();

        for (int i = 0; i <= m - n; i++) {
            int j = 0;

            while (j < n && haystack[i + j] == needle[j]) {
                j++;
            }

            if (j == n) {
                return i; // Found a match
            }
        }

        return -1; // No match found
    }
};
