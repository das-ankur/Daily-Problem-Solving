#include<bits/stdc++.h>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /*
        int res=INT_MIN, temp_sum=0;
        for(int i=0;i<nums.size();i++) {
            temp_sum+=nums[i];
            if(temp_sum<nums[i])
                temp_sum=nums[i];
            res=max(res, temp_sum);
        }
        return res;
        */
        /*
        //Practice 1
        int res=INT_MIN, temp_sum=0;
        for(int i=0;i<nums.size();i++) {
            temp_sum+=nums[i];
            if(temp_sum<nums[i])
                temp_sum=nums[i];
            res=max(res, temp_sum);
        }
        return res;
        */
        /*
        //Practice 2
        int max_end_here=0, res=INT_MIN;
        for(int i=0;i<nums.size();i++) {
            if(max_end_here+nums[i]<nums[i])
                max_end_here=nums[i];
            else
                max_end_here+=nums[i];
            if(res<max_end_here)
                res=max_end_here;
        }
        return res;
        */
        /*
        // Practice 3
        int max_ending_here=0, max_sum=INT_MIN;
        for(int i=0;i<nums.size();i++) {
            max_ending_here=max(nums[i], max_ending_here+nums[i]);
            max_sum=max(max_sum, max_ending_here);
        }
        return max_sum;
        */
        // Practice 4
        int max_ending_here=0, max_sum=INT_MIN;
        for(int i=0;i<nums.size();i++) {
            max_ending_here=max(nums[i], max_ending_here+nums[i]);
            max_sum=max(max_sum, max_ending_here);
        }
        return max_sum;
    }
};