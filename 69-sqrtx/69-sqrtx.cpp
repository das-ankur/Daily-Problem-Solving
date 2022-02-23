class Solution {
public:
    int mySqrt(int x) {
        if(x<=0)
            return x;
        long long int low=1, high=x, mid;
        while(high-low>1) {
            mid=(low+high)/2;
            if(mid*mid==x)
                return mid;
            else if(mid*mid<x)
                low=mid;
            else
                high=mid-1;
        }
        if(high*high<x)
            return high;
        else
            return low;
    }
};