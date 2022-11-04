class Solution {
public:
    /*
    // XOR 
    int singleNonDuplicate(vector<int>& nums) {
        int res=0;
        for(int x: nums) res^=x;
        return res;
    }
    */
    // Binary Search
    int singleNonDuplicate(vector<int> &nums) {
        int low=0, high=nums.size()-2;
        if(nums.size()==1) return nums[0];
        while(low<high) {
            int mid=(low+high)/2;
            if(mid%2==0) {
                if(nums[mid]==nums[mid+1]) low=mid+2;
                else high=mid-1;
            }
            else {
                if(nums[mid]==nums[mid-1]) low=mid+1;
                else high=mid-2;
            }
        }
        return nums[low];
    }
};