class Solution {
public:
    bool isPowerOfTwo(int n) {
        // Subtracting 1 and then bitwise and of n and (n-1): if zero then true otherwise false
        if(n<=0) return false;
        return !(n & (n-1));
        
    }
};