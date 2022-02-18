class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0, high=n-1;
        if(target<=nums[0])
            return 0;
        if(target==nums[n-1])
            return n-1;
        if(target>nums[n-1])
            return n;
        while(high-low>1) {
            int mid=(high+low)/2;
            if(nums[mid]==target) {
                return mid;
            }
            else if(nums[mid]>target) {
                high=mid;
            }
            else {
                low=mid+1;
            }
        }
        if(nums[low]>=target)
            return low;
        else if(nums[high]>=target)
            return high;
        else
            return -1;
    }
};