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
    }
};