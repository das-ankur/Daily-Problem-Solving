class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size(), low=0, high=n-1;
        while(low<high) {
            int mid=(low+high)/2;
            if(mid==0) return nums[0]>=nums[1]?0:1;
            if(mid==n-1) return nums[n-1]>=nums[n-2]?n-1:n-2;
            if(nums[mid]>=nums[mid-1] && nums[mid]>=nums[mid+1]) return mid;
            if(nums[mid]<nums[mid-1]) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};