class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0, j=1, n=nums.size();
        if(n==0)
            return 0;
        // Apply two pointers approach
        // i is used for traversing
        // j is used to traverse maintain the index of unique elements
        for(;i<n;i++) {
            if(nums[i]!=nums[j-1]) {
                nums[j++]=nums[i];
            }
        }
        return j;
    }
};