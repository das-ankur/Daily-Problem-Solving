class Solution {
public:
    bool isDivisionPossible(vector<int> &nums, int k, int max_sum) {
        int sum=0, set_count=1;
        for(int i=0;i<nums.size();i++) {
            sum+=nums[i];
            if(sum>max_sum) {
                sum=nums[i];
                set_count++;
            }
            if(set_count>k) return false;
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=*max_element(nums.begin(),nums.end()), high=accumulate(nums.begin(),nums.end(),0), ans=-1;
        while(low<=high) {
            int mid=low+(high-low)/2;
            if(isDivisionPossible(nums,k,mid)) {
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};