class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero_count=0, one_count=0, two_count=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==0) zero_count++;
            else if(nums[i]==1) one_count++;
            else two_count++;
        }
        int i=0;
        while(zero_count!=0) {
            nums[i++]=0;
            zero_count--;
        }
        while(one_count!=0) {
            nums[i++]=1;
            one_count--;
        }
        while(two_count!=0) {
            nums[i++]=2;
            two_count--;
        }
    }
};