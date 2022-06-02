// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        /*
        if(n==1)
            return 1;
        long long int high=n, low=0;
        while(high-low>1) {
            long long int mid=(high+low)/2;
            if(isBadVersion(mid))
                high=mid;
            else
                low=mid+1;
        }
        if(isBadVersion(low))
            return low;
        else
            return high;
        */
        if(n==1)
            return 1;
        long long int low=0,high=n;
        while(high-low>1) {
            long long int mid=(low+high)/2;
            if(isBadVersion(mid))
                high=mid;
            else
                low=mid+1;
        }
        if(isBadVersion(low))
            return low;
        else
            return high;
    }
};