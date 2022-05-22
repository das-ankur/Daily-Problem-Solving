class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        /*
        unordered_map<int, int> m;
        int n=nums.size();
        for(int i=0;i<n;i++) {
            if(m.find(nums[i])!=m.end())
                return true;
            else
                m[nums[i]]++;
        }
        return false;
        */
        //Practice 1
        unordered_map<int,int> m;
        for(auto num: nums) {
            if(m.find(num)!=m.end())
                return true;
            m[num]++;
        }
        return false;
    }
};