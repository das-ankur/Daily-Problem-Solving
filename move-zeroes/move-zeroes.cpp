class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i, j, n=nums.size();
        for(i=0, j=0;i<n;i++) {
            if(nums[i]!=0) {
                nums[j++]=nums[i];
            }
        }
        while(j<n)
            nums[j++]=0;
    }
};