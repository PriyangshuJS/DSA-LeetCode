class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int lens=s.length();
        int lent=t.length();
        string s1, t1;
        
        for(int i=0; i<lens; i++)
        {
            if(s[i]=='#' && !s1.empty())
                s1.pop_back();
            
            else if(s[i]!='#')
                s1.push_back(s[i]);
        }
        
        for(int i=0; i<lent; i++)
        {
            if(t[i]=='#' && !t1.empty()) 
                t1.pop_back();
            
            else if(t[i]!='#')
                t1.push_back(t[i]);
        }
        
        return (s1==t1);
    }
};