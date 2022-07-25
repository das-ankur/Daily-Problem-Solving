class Solution {
public:
    /*
    void helper(vector<int> &nums, int pos, vector<vector<int>> &ans) {
        if(pos>=nums.size()) {
            ans.push_back(nums);
            return;
        }
        unordered_set<int> s;
        for(int i=pos;i<nums.size();i++) {
            if(s.find(nums[i])!=s.end())
                continue;
            s.insert(nums[i]);
            swap(nums[i],nums[pos]);
            helper(nums,pos+1,ans);
            swap(nums[i],nums[pos]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        helper(nums,0,ans);
        return ans;
    }
    */
    /*
    //Practice 1
    void helper(vector<int> &nums, int pos, vector<vector<int>> &permutations) {
        if(pos>=nums.size()) {
            permutations.push_back(nums);
            return;
        }
        unordered_set<int> s;
        for(int i=pos;i<nums.size();i++) {
            if(s.find(nums[i])!=s.end())
                continue;
            s.insert(nums[i]);
            swap(nums[i],nums[pos]);
            helper(nums,pos+1,permutations);
            swap(nums[i],nums[pos]);
            
        }
    }
    vector<vector<int>> permuteUnique(vector<int> &nums) {
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
        unordered_set<int> s;
        for(int i=pos;i<nums.size();i++) {
            if(s.find(nums[i])!=s.end()) continue;
            s.insert(nums[i]);
            swap(nums[i],nums[pos]);
            helper(nums,pos+1,res);
            swap(nums[i],nums[pos]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int> &nums) {
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
        unordered_set<int> s;
        for(int i=pos;i<nums.size();i++) {
            if(s.find(nums[i])!=s.end()) continue;
            s.insert(nums[i]);
            swap(nums[i],nums[pos]);
            helper(nums,pos+1,res);
            swap(nums[i],nums[pos]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int> &nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        helper(nums,0,res);
        return res;
    }
    */
    // Practice 4
    void helper(vector<int> &nums, int i, vector<vector<int>> &res) {
        if(i>=nums.size()) {
            res.push_back(nums);
            return;
        }
        unordered_set<int> s;
        for(int j=i;j<nums.size();j++) {
            if(s.find(nums[j])!=s.end()) continue;
            s.insert(nums[j]);
            swap(nums[i],nums[j]);
            helper(nums,i+1,res);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        helper(nums,0,res);
        return res;
    }
};