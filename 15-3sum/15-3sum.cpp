class Solution {
public:
    // Time Complexcity: O(n^2)
    // Space Complexcity: O(1)
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++) {
            int a=nums[i];
            int temp=-a;
            int start=i+1;
            int end=n-1;
            while(start<end) {
                if(nums[start]+nums[end]==temp) {
                    res.push_back({a, nums[start], nums[end]});
                    // To avoid repetition of result
                    while(start+1<n && nums[start]==nums[start+1])
                        start++;
                    // To avoid  repetition of result
                    while(end-1>0 && nums[end]==nums[end-1])
                        end--;
                    start++;
                    end--;
                }
                else if(nums[start]+nums[end]>temp)
                    end--;
                else
                    start++;
            }
            // To avoid repetition of result
            while(i+1<n && nums[i+1]==nums[i])
                i++;
        }
        return res;
    }
};