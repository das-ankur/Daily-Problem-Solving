class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n), hash(n);
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++) {
            hash[i]=i;
            for(int prev=0;prev<i;prev++) {
                if(nums[i]%nums[prev]==0 && 1+dp[prev]>dp[i]) {
                    dp[i]=1+dp[prev];
                    hash[i]=prev;
                }
            }
        }
        int lastIndex=max_element(dp.begin(), dp.end())-dp.begin();
        vector<int> res;
        res.push_back(nums[lastIndex]);
        while(lastIndex!=hash[lastIndex]) {
            lastIndex=hash[lastIndex];
            res.push_back(nums[lastIndex]);
        }
        return res;
    }
};