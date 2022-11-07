class Solution {
public:
    /*
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
    */
    // Practice 1
    int findPeakElement(vector<int> &nums) {
        int low=0, high=nums.size()-1;
        if(nums.size()==1) return 0;
        if(nums.size()==2) {
            if(nums[0]>nums[1]) return 0;
            else return 1;
        }
        while(low<high) {
            int mid=low+(high-low)/2;
            if(mid==0) return nums[mid]>nums[mid+1]?mid:mid+1;
            else if(mid==nums.size()-1) return nums[nums.size()-1]>nums[nums.size()-2]?mid:mid-1;
            else if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;
            else if(nums[mid+1]>nums[mid]) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};