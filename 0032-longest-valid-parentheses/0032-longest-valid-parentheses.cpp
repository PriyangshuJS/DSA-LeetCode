class Solution {
public:
    int longestValidParentheses(string s) {
    stack<int> st;
    int left = 0;
    int right = 0;
    int maxLen = 0;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') {
            st.push(i);
        } else { // s[i] == ')'
            if (!st.empty()) {
                st.pop();
                if (!st.empty()) {
                    maxLen = max(maxLen, i - st.top());
                } else {
                    maxLen = max(maxLen, i - left + 1);
                }
            } else {
                left = i + 1;
            }
        }
    }

    return maxLen;
}

};