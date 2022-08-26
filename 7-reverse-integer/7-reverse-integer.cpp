class Solution {
public:
    int reverse(int x) {
        int res=0;
        bool neg=false;
        if(x<0) neg=true;
        x=abs(x);
        while(x>0) {
            if(res>INT_MAX/10) return 0;
            res*=10;
            res+=x%10;
            x/=10;
        }
        if(neg) res*=(-1);
        return res;
    }
};