class Solution {
public:
    bool isPalindrome(int x) {
        long long rev =0,rem;
        if(x < 0){
        return false;
        }
        
        int num = x;
        while(x != 0) 
        {
            rem = x % 10;
            rev = rev * 10 + rem;
            x /= 10;
        }

        if(num==rev){
            return true;
        }
        return false;
    }
};