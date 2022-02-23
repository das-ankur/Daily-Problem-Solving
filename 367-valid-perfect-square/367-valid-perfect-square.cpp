class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==0 || num==1)
            return true;
        long long int low=0, high=num, mid, temp;
        while(low<=high) {
            mid=(high+low)/2;
            temp=mid*mid;
            if(temp==num)
                return true;
            else if(temp<num)
                low=mid+1;
            else
                high=mid-1;
        }
        return false;
    }
};