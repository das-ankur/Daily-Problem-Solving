class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*int n=nums.size();
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
        return res;*/
        int n=nums.size();
        vector<int> res(2);
        unordered_map<int, int> m;
        for(int i=0;i<n;i++) {
            int d=target-nums[i];
            auto it=m.find(d);
            if(it!=m.end()) {
                res[0]=it->second;
                res[1]=i;;
                break;
            }
            else {
                m[nums[i]]=i;
            }
        }
        return res;
    }
};