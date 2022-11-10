class Solution {
public:
    int calculateSum(vector<int> &nums, int n) {
        int s=0;
        for(int i=0;i<nums.size();i++) s+=(int)ceil((float)nums[i]/(float)n);
        return s;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1, high=*max_element(nums.begin(),nums.end());
        int divisor=INT_MAX;
        while(low<=high) {
            int mid=(low+high)/2;
            int cur_sum=calculateSum(nums,mid);
            if(cur_sum<=threshold) {
                divisor=min(divisor,mid);
                high=mid-1;
            }
            else low=mid+1;
        }
        return divisor;
    }
};