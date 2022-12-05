class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count=0, res=start^goal;
        while(res!=0) {
            if(res & 1==1) count++;
            res=res>>1;
        }
        return count;
    }
};