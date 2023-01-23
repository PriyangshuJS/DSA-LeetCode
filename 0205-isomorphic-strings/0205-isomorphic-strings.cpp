class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int len=t.length();
        unordered_map<char, int>ms;
        unordered_map<char, int>mt;
        
        for(int i=0; i<len; i++)
        {
            ms[s[i]]=i+1;
            mt[t[i]]=i+1;
        }
        for(int i=0; i<len; i++)
        {
            if(ms[s[i]] != mt[t[i]])
                return false;
        }
        return true;
    }
};

