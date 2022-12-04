class Solution {
public:
    /*
    int maxSubArray(vector<int>& nums) {
        int max_sum=INT_MIN, max_so_far=0;
        for(int i=0;i<nums.size();i++) {
            max_so_far=max(nums[i], max_so_far+nums[i]);
            max_sum=max(max_so_far, max_sum);
        }
        return max_sum;
    }
    */
    /*
    // Practice 1
    int maxSubArray(vector<int>& nums) {
        int max_sum=INT_MIN, max_so_far=0;
        for(int i=0;i<nums.size();i++) {
            max_so_far=max(nums[i], max_so_far+nums[i]);
            max_sum=max(max_sum, max_so_far);
        }
        return max_sum;
    }
    */
    /*
    // Naive Approach
    int maxSubArray(vector<int>& nums) {
        int max_sum=INT_MIN;
        for(int i=0;i<nums.size();i++) {
            for(int j=0;j<=i;j++) {
                int cur_sum=0;
                for(int k=j;k<=i;k++) cur_sum+=nums[k];
                max_sum=max(max_sum,cur_sum);
            }
        }
        return max_sum;
    }
    */
    int maxSubArray(vector<int>& nums) {
        int max_sum=INT_MIN, max_so_far=0;
        for(int i=0;i<nums.size();i++) {
            max_so_far=max(max_so_far+nums[i], nums[i]);
            max_sum=max(max_sum, max_so_far);
        }
        return max_sum;
    }
}; 