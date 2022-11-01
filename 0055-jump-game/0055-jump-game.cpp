class Solution {
public:
    /*
    // Recursion
    bool helper(int i, vector<int> &nums) {
        if(i>=nums.size()-1) return true;
        bool res=false;
        for(int j=1;j<=nums[i];j++) res=res||helper(j+i,nums);
        return res;
    }
    bool canJump(vector<int>& nums) {
        vector<int> memo(nums.size(),-1);
        return helper(0,nums);
    }
    */
    /*
    // Memoization
    bool helper(int i, vector<int> &nums, vector<int> &memo) {
        if(i==nums.size()-1) return true;
        if(memo[i]!=-1) return memo[i];
        bool res=false;
        int dis=nums.size()-i-1;
        int j=dis<=nums[i]?dis:nums[i];
        for(;j>0;j--) {
            int idx=j+i;
            res=res||helper(idx,nums,memo);
        }
        return memo[i]=res;
    }
    bool canJump(vector<int>& nums) {
        vector<int> memo(nums.size(),-1);
        return helper(0,nums,memo);
    }
    */
    // Best Approach: Greedy
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int x=n-1;
        bool ans=0;
        for(int i=n-1;i>=0;i--) {
            if(i+nums[i]>=x) {
                ans=1;
                x=i;
            }
            else ans=0;
        }
        return ans;
    }
};