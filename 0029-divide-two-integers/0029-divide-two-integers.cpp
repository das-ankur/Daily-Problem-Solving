class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(dividend==INT_MIN && divisor==1) return INT_MIN;
        if(divisor==1) return dividend;
        bool sign=dividend>=0 == divisor>=0?true:false;
        long int dd=abs(dividend);
        long int dv=abs(divisor);
        long int res=0;
        while(dd-dv>=0) {
            long int count=0;
            while(dd-(dv<<1<<count)>=0) {
                count++;
            }
            res+=1<<count;
            dd-=dv<<count;
        }
        return sign?res:-res;
    }
};