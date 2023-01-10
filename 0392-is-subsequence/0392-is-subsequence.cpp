class Solution {
public:
    bool isSubsequence(string s, string t) {
        int slen=s.length();
        int tlen=t.length();
        int i, j=0;
        for(i=0; i<tlen && j<slen; i++)
        { 
            if(s[j]==t[i])
            {
               j++;
            }
            
        }
        if(j==slen)
            return true;
        else
            return false;
    }
};