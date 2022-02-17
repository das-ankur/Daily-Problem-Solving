class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int, int> m;
        vector<int> res(2);
        for(int i=0;i<n;i++) {
            if(m.find(target-nums[i])!=m.end()) {
                res[0]=i;
                res[1]=m[target-nums[i]];
                break;
            }
            m[nums[i]]=i;
        }
        return res;
    }
};