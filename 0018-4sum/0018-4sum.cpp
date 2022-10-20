# include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> res;
        for(int i=0;i<n;) {
            for(int j=i+1;j<n;) {
                long long int s=target-(long long int)(nums[i]+nums[j]);
                int left=j+1;
                int right=n-1;
                while(left<right) {
                    int temp=nums[left]+nums[right];
                    if(temp<s) {
                        left++;
                        while(left<n && nums[left]==nums[left-1]) left++;
                    }
                    else if(temp>s) {
                        right--;
                        while(right>=0 && nums[right]==nums[right+1]) right--;
                    }
                    else {
                        res.push_back({nums[i],nums[j],nums[left],nums[right]});
                        left++;
                        right--;
                        while(left<n && nums[left]==nums[left-1]) left++;
                        while(right>=0 && nums[right]==nums[right+1]) right--;
                    }
                }
                j++;
                while(j<n && nums[j]==nums[j-1]) j++;
            }
            i++;
            while(i<n && nums[i]==nums[i-1]) i++;
        }
        return res;
    }
};