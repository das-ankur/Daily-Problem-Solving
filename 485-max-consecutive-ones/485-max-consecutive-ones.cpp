class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_one=0, temp=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==1) {
                temp++;
            }
            else {
                max_one=max(max_one,temp);
                temp=0;
            }
        }
        max_one=max(max_one,temp);
        return max_one;
    }
};