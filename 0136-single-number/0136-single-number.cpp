class Solution {
public:
    /*
    int singleNumber(vector<int>& nums) {
        // Apply xor
        int res=0;
        for(int i=0;i<nums.size();i++) {
            res ^= nums[i];
        }
        return res;
    }
    */
    /*
    // Hashing
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int x: nums) m[x]++;
        for(auto x: m) {
            // x.fiurst-> number, x.second: frequency
            if(x.second==1) return x.first;
        }
        return -1;
    }
    */
    // Bit Manipulation: XOR
    int singleNumber(vector<int>& nums) {
        int res=0;;
        for(int x: nums) res ^= x;
        return res;
    }
};