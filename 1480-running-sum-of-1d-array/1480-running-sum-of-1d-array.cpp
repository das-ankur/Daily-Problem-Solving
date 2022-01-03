class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size(), s=0;
        vector<int>res(n);
        for(int i=0;i<n;i++) {
            s+=nums[i];
            res[i]=s;
        }
        return res;
    }
};