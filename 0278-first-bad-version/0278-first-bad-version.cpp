// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start=0, end=n-1, mid;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(isBadVersion(mid)==false)
                start=mid+1;
            else
                end=mid-1;
        }
        return start;
        
    }
};