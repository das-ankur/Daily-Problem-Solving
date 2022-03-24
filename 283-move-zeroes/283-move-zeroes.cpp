class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0, j=0;j<nums.size();j++) {
            if(nums[j]==0)
                continue;
            else {
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                i++;
            }
        }
    }
};