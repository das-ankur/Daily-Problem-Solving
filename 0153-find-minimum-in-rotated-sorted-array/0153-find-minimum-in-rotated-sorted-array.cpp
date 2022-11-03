class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0, high=nums.size()-1, min_val=INT_MAX;
        while(low<=high) {
            int mid=(low+high)/2;
            if(nums[low]<nums[high]) {
                min_val=min(min_val,nums[low]);
                break;
            }
            if(nums[low]<=nums[mid]) {
                min_val=min(min_val,nums[low]);
                low=mid+1;
            }
            else {
                min_val=min(min_val,nums[mid]);
                high=mid-1;
            }
        }
        return min_val;
    }
};