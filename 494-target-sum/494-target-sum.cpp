class Solution {
public:
    /*
    // Recursion
    int helper(int idx, int t, vector<int> &nums) {
        if(idx==0) {
            if(nums[idx]==t && nums[idx]==-t) return 2;
            else if (nums[idx]==t || nums[idx]==-t) return 1;
            else return 0;
        }
        int neg=helper(idx-1,t-nums[idx],nums);
        int pos=helper(idx-1,t+nums[idx],nums);
        return neg+pos;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return helper(nums.size()-1,target,nums);
    }
    */
    // Converting the recursion to memoization is difficult and consumes more space
    /*
    // Recursion
    int helper(int idx, int t, vector<int> &nums) {
        if(idx==0) {
            if(t==0 && nums[idx]==t) return 2;
            else if(t==0 || nums[idx]==t) return 1;
            else return 0;
        }
        int notTake=helper(idx-1,t,nums);
        int take=0;
        if(nums[idx]<=t) take=helper(idx-1,t-nums[idx],nums);
        return take+notTake;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int s=0;
        for(int n:nums) s+=n;
        if(target+s<0 || (target+s)%2!=0) return 0;
        int k=(target+s)/2;
        return helper(nums.size()-1,k,nums);
    }
    */
    /*
    // Memoization
    int helper(int idx, int t, vector<int> &nums, vector<vector<int>> &memo) {
        if(idx==0) {
            if(t==0 && nums[idx]==t) return 2;
            else if(t==0 || nums[idx]==t) return 1;
            else return 0;
        }
        if(memo[idx][t]!=-1) return memo[idx][t];
        int notTake=helper(idx-1,t,nums,memo);
        int take=0;
        if(nums[idx]<=t) take=helper(idx-1,t-nums[idx],nums,memo);
        return memo[idx][t]=take+notTake;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int s=0;
        for(int n:nums) s+=n;
        if(target+s<0 || (target+s)%2!=0) return 0;
        int k=(target+s)/2;
        int n=nums.size();
        vector<vector<int>> memo(n, vector<int>(k+1,-1));
        return helper(n-1,k,nums,memo);
    }
    */
    /*
    // Tabulation
    int findTargetSumWays(vector<int>& nums, int target) {
        int s=0;
        for(int n:nums) s+=n;
        if(target+s<0 || (target+s)%2!=0) return 0;
        int k=(target+s)/2;
        int n=nums.size();
        vector<vector<int>> table(n, vector<int>(k+1,-1));
        for(int t=0;t<=k;t++) {
            if(t==0 && nums[0]==t) table[0][t]=2;
            else if(t==0 || nums[0]==t) table[0][t]=1;
            else table[0][t]=0;
        }
        for(int idx=1;idx<n;idx++) {
            for(int t=0;t<=k;t++) {
                int notTake=table[idx-1][t];
                int take=0;
                if(nums[idx]<=t) take=table[idx-1][t-nums[idx]];
                table[idx][t]=take+notTake;
            }
        }
        return table[n-1][k];
    }
    */
    // Space Optimization 
    int findTargetSumWays(vector<int>& nums, int target) {
        int s=0;
        for(int n:nums) s+=n;
        if(target+s<0 || (target+s)%2!=0) return 0;
        int k=(target+s)/2;
        int n=nums.size();
        vector<vector<int>> table(n, vector<int>(k+1,-1));
        for(int t=0;t<=k;t++) {
            if(t==0 && nums[0]==t) table[0][t]=2;
            else if(t==0 || nums[0]==t) table[0][t]=1;
            else table[0][t]=0;
        }
        for(int idx=1;idx<n;idx++) {
            for(int t=0;t<=k;t++) {
                int notTake=table[idx-1][t];
                int take=0;
                if(nums[idx]<=t) take=table[idx-1][t-nums[idx]];
                table[idx][t]=take+notTake;
            }
        }
        return table[n-1][k];
    }
};