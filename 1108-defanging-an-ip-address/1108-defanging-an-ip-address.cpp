class Solution {
public:
    string defangIPaddr(string address) {
        int x=0;
        string final;
        while(x<address.length())
        {
            if(address[x]=='.')
            {
                final=final +"[.]";
            }
            else
            {
                final=final + address[x];
            }
            x++;
        }
        return final;
    }
};