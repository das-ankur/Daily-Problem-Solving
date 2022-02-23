class Solution {
public:
    int arrangeCoins(int n) {
        long long int low=1, high=n, mid, res;
        while(high-low>1) {
            mid=(high+low)/2;
            long long int temp=mid*(mid+1)/2;
            if(n-temp==0)
                return mid;
            else if(n-temp>0)
                low=mid;
            else
                high=mid-1;
        }
        if(n-high*(high+1)/2>=0)
            return high;
        else
            return low;
    }
};