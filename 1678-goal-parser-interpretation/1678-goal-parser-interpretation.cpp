class Solution {
public:
    string interpret(string command) {
        int len=command.length();
        string ans;
        for(int i=0; i<len; i++)
        {
            if(command[i]=='G')
            {   ans+="G";
            }
            
            else if(command[i]=='(' && command[i+1]=='a')
            {       ans+="a";
                    ans+="l";
                    i=i+3;
            }
            
            else if(command[i]=='(' && command[i+1]==')')
            {
                ans+="o";
                i++;
            }
        }
        return ans;
    }
};