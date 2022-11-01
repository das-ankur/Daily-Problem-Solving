class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        int n=nums.size();
        int low=0, high=n-1, pos=-1;
        while(low<=high) {
            int mid=(low+high)/2;
            if(nums[mid]==target) {
                pos=mid;
                break;
            }
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }
        if(pos==-1) return res;
        int i;
        for(i=pos;i>=0 && nums[i]==nums[pos];i--);
        res[0]=i+1;
        for(i=pos;i<n && nums[i]==nums[pos];i++);
        res[1]=i-1;
        return res;
    }
};