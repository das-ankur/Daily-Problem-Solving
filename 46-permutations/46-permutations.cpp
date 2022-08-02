class Solution {
public:
    /*
    void helper(vector<int> &nums, int pos, vector<vector<int>> &ans) {
        if(pos>=nums.size()) {
            ans.push_back(nums);
            return;
        }
        for(int i=pos;i<nums.size();i++) {
            swap(nums[i],nums[pos]);
            helper(nums,pos+1,ans);
            swap(nums[i],nums[pos]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> ans;
        helper(nums,0,ans);
        return ans;
    }
    */
    /*
    // Practice 1
    void helper(vector<int> &nums, int pos, vector<vector<int>> &permutations) {
        if(pos>=nums.size()) {
            permutations.push_back(nums);
            return;
        }
        for(int i=pos;i<nums.size();i++) {
            swap(nums[i],nums[pos]);
            helper(nums,pos+1,permutations);
            swap(nums[i],nums[pos]);
        }
    }
    vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> permutations;
        helper(nums,0,permutations);
        return permutations;
    }
    */
    /*
    // Practice 2
    void helper(vector<int> &nums, int pos, vector<vector<int>> &res) {
        if(pos>=nums.size()) {
            res.push_back(nums);
            return;
        }
        for(int i=pos;i<nums.size();i++) {
            swap(nums[i],nums[pos]);
            helper(nums,pos+1,res);
            swap(nums[i],nums[pos]);
        }
    }
    vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> res;
        helper(nums,0,res);
        return res;
    }
    */
    /*
    // Practice 3
    void helper(vector<int> &nums, int pos, vector<vector<int>> &res) {
        if(pos>=nums.size()) {
            res.push_back(nums);
            return;
        }
        for(int i=pos;i<nums.size();i++) {
            swap(nums[i],nums[pos]);
            helper(nums,pos+1,res);
            swap(nums[i],nums[pos]);
        }
    }
    vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> res;
        helper(nums,0,res);
        return res;
    }
    */
    /*
    // Practice 4
    void helper(vector<int> &nums, int i, vector<vector<int>> &res) {
        if(i>=nums.size()) {
            res.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++) {
            swap(nums[i],nums[j]);
            helper(nums,i+1,res);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int> & nums) {
        vector<vector<int>> res;
        helper(nums,0,res);
        return res;
    }
    */
    /*
    // Practice 5
    void helper(vector<int> &nums, int pos, vector<vector<int>> &res) {
        if(pos>=nums.size()) {
            res.push_back(nums);
            return;
        }
        for(int i=pos;i<nums.size();i++) {
            swap(nums[i],nums[pos]);
            helper(nums,pos+1,res);
            swap(nums[i],nums[pos]);
        }
    }
    vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> res;
        helper(nums,0,res);
        return res;
    }
    */
    // Practice 6
    void helper(vector<int> &nums, int pos, vector<vector<int>> &res) {
        if(pos>=nums.size()) {
            res.push_back(nums);
            return;
        }
        for(int i=pos;i<nums.size();i++) {
            swap(nums[i],nums[pos]);
            helper(nums,pos+1,res);
            swap(nums[i],nums[pos]);
        }
    }
    vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> res;
        helper(nums,0,res);
        return res;
    }
};