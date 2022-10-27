class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int left=nums[0], right=nums[0], prod=1, n=nums.size();
        bool zero=false;
        for(int i=0;i<n;i++) {
            prod*=nums[i];
            if(nums[i]==0) {
                zero=true;
                prod=1;
                continue;
            }
            left=max(left,prod);
        }
        prod=1;
        for(int i=n-1;i>=0;i--) {
            prod*=nums[i];
            if(nums[i]==0) {
                zero=true;
                prod=1;
                continue;
            }
            right=max(right,prod);
        }
        if(zero) return max(max(left,right),0);
        else return max(left,right);
    }
};