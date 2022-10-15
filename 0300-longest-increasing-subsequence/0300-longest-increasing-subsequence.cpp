# include <bits/stdc++.h>
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> temp;
        temp.push_back(nums[0]);
        int n=nums.size();
        for(int i=1;i<n;i++) {
            if(temp[temp.size()-1]<nums[i]) temp.push_back(nums[i]);
            else {
                int idx=lower_bound(temp.begin(), temp.end(), nums[i])-temp.begin();
                temp[idx]=nums[i];
            }
        }
        return temp.size();
    }
};