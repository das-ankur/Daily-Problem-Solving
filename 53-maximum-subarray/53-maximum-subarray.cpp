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
        //Practice 1
        int res=INT_MIN, temp_sum=0;
        for(int i=0;i<nums.size();i++) {
            temp_sum+=nums[i];
            if(temp_sum<nums[i])
                temp_sum=nums[i];
            res=max(res, temp_sum);
        }
        return res;
    }
};