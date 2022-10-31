class Solution {
public:
    /*
    int search(vector<int>& nums, int target) {
        int beg=0, end=nums.size()-1;
        while(beg<=end) {
            int mid=(beg+end)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) beg=mid+1;
            else end=mid-1;
        }
        return -1;
    }
    */
    int search(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1;
        while(low<=high) {
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }
        return -1;
    }
};