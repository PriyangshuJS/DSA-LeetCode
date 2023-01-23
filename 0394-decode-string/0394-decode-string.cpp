class Solution {
public:
    string decodeString(string s) {
        stack<string> str;
        int len =s.length();
        for(int i=0; i<len; i++)
        {
            if(isdigit(s[i]))
            {
                string temp="";
                while(i<len && isdigit(s[i]))
                {
                    temp=temp+ s[i];
                    i++;
                }
                str.push(temp);
            }
            if(s[i]!=']')
            {
                str.push(string(1, s[i]));
                continue;
            }
            else
            {
                string temp="";
                while(!str.empty() && str.top()!="[")
                {
                    temp=str.top()+temp;
                    str.pop();
                }
                str.pop();
                
                int x=stoi(str.top());
                str.pop();
                string y="";
                while(x--)
                {
                    y=y+temp;
                }
                str.push(y);
            }
        }
            string ans="";
            while(!str.empty())
            {
                ans=str.top()+ans;
                str.pop();
            }
    return ans;
    }
};