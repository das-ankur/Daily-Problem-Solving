class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum=accumulate(nums.begin(), nums.end(), 0), left_sum=0, right_sum=0, pos=-1, n=nums.size();
        for(int i=0;i<n;i++) {
            if(i!=0)
                left_sum+=nums[i-1];
            right_sum=total_sum-left_sum-nums[i];
            if(left_sum==right_sum) {
                pos=i;
                break;
            }
        }
        return pos;
    }
};