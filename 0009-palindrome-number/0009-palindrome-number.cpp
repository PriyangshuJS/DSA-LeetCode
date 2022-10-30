class Solution {
public:
    bool isPalindrome(int x) {
        long long rem, rev=0, num=x;
        if(x<0)
        {
            return false;
        }

        while(x != 0) 
        {
            rem = x % 10;
            rev = rev * 10 + rem;
            x /= 10;
        }
        if(rev==num)
        {
            return true;
        }
        else
            return false;
    }
};