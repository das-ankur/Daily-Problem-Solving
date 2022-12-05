class Solution {
public:
    /*
    // Count set bits
    int minBitFlips(int start, int goal) {
        int count=0, res=start^goal;
        while(res!=0) {
            if(res & 1==1) count++;
            res=res>>1;
        }
        return count;
    }
    */
    // In-built Method
    int minBitFlips(int start, int goal) {
        return __builtin_popcount(start^goal);
    }
};