class Solution {
public:
    int mySqrt(int x) {
        if(x<=1) return x;
        long long int low=0, high=x;
        while(high-low>1) {
            long long int mid=(high+low)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid<x) low=mid;
            else high=mid-1;
        }
        if(high*high<=x) return high;
        else return low;
    }
};