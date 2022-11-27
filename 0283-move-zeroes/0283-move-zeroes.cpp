class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        /*
        int n=nums.size();
        if(n==0 || n==1)
            return;
        int left=0,right=0;
        while(right<n) {
            if(nums[right]==0)
                right++;
            else {
                swap(nums[left],nums[right]);
                left++;
                right++;
            }
        }
        */
        /*
        // Practice 1
        int n=nums.size();
        if(n<=1) return;
        for(int left=0,right=0;right<n;right++) {
            if(nums[right]==0) continue;
            else {
                swap(nums[left],nums[right]);
                left++;
            }
        }
        */
        // Practice 2
        int n=nums.size();
        if(n==1) return;
        for(int zero=0, non_zero=0; non_zero<n;non_zero++) {
            if(nums[non_zero]==0) continue;
            else {
                swap(nums[non_zero], nums[zero]);
                zero++;
            }
        }
        /*
        int n=nums.size();
        if(n==1) return;
        int zero=0, non_zero=0;
        while(non_zero<n) {
            while(non_zero<n && nums[non_zero]==0) non_zero++;
            while(zero<non_zero && nums[zero]!=0) zero++;
            if(zero<non_zero) swap(nums[zero], nums[non_zero]);
            zero++;
            non_zero++;
        }
        */
    }
};