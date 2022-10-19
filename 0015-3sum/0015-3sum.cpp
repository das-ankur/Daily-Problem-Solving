class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int n=nums.size();
        for(int i=0;i<n;i++) {
            if(i==0 || nums[i]!=nums[i-1]) {
                int sum=-nums[i];
                for(int low=i+1,high=n-1;low<high;) {
                    int temp=nums[low]+nums[high];
                    if(temp<sum) low++;
                    else if(temp>sum) high--;
                    else {
                        res.push_back({nums[i],nums[low],nums[high]});
                        low++;
                        high--;
                        while(low<n && nums[low-1]==nums[low]) low++;
                        while(high>=0 && nums[high+1]==nums[high]) high--;
                    }
                }
            }
        }
        return res;
    }
};