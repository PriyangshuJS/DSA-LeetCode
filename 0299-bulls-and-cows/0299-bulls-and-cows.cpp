class Solution {
public:
    string getHint(string secret, string guess) {
        int len=secret.length();
        vector<int> s(10, 0);
        vector<int> g(10, 0);
        int cows=0, bulls=0;
        
        for(int i=0; i<len; i++)
        {
            if(secret[i]==guess[i])
            {
                bulls++;
            }    
            else
            {
                s[secret[i]-'0']++;
                g[guess[i]-'0']++;
            }
        }
        for(int i=0; i<10; i++)
        {
            cows= cows +min(s[i], g[i]);
        }
        
        
        string hint=to_string(bulls)+"A"+to_string(cows)+"B";
        return hint;
    }
};