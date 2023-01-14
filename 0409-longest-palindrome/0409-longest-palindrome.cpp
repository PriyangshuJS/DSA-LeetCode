class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> m;
        int ans=0;
        int n=s.length();
        for(int i=0; i<n; i++)
        {
            m[s[i]]++;
            if(m[s[i]]%2==0)
            {   ans=ans+m[s[i]];
                m[s[i]]=0;
            }
        }
        for(auto j:m)
       {     
            if(j.second==1)
            {
                ans++;
                break;
            }
        }
        return ans;
    }
};