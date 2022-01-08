class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n-2;
        int j = n-1;
        // Step1: Find the index1 where nums[i] > nums[i+1]
        for(; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                break;
            }
        }
        // Step 2: If index1 is greater than 0 then find an another index2 where
        //         nums[index2] > nums[index1]
        if(i >= 0){
            for(; j > i; j--) {
                if(nums[j] > nums[i]){
                    break;
                }
            }
            // Step 3: swap the element of index1 and index2
            swap(nums[i],nums[j]);
            // Step 4: Reverse the array from index1+1 to last index 
            reverse(nums.begin()+i+1, nums.end());
        }else{
            // Step 2: If index1 isn't found then reverse the entire array
            reverse(nums.begin(), nums.end());
        }
    }
};