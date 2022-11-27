class Solution {
public:
    /*
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int total_sum=(n*(n+1))/2;
        int array_sum=accumulate(nums.begin(), nums.end(), 0);
        return total_sum-array_sum;
    }
    */
    /*
    // Naive Approach
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<bool> flag(n+1,false);
        for(int i=0;i<nums.size();i++) flag[nums[i]]=true;
        for(int i=0;i<=n;i++) if(!flag[i]) return i;
        return -1;
    }
    */
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int total_sum=n*(n+1)/2;
        int array_sum=accumulate(nums.begin(),nums.end(),0);
        return total_sum-array_sum;
    }
    
};