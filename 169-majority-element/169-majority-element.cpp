class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(), c=0;
        unordered_map<int, int> occur(n);
        for(int i=0;i<n;i++) {
            occur[nums[i]]++;
            if(occur[nums[i]]>n/2)
                return nums[i];
        }
        return -1;
    }
};