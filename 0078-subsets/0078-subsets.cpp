class Solution {
public:
    /*
    void helper(vector<int> &v, int pos, vector<int> &subset, vector<vector<int>> &ans) {
        if(pos>=v.size()) {
            ans.push_back(subset);
            return;
        }
        subset.push_back(v[pos]);
        helper(v,pos+1,subset,ans);
        subset.pop_back();
        helper(v,pos+1,subset,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> ans;
        helper(nums,0,subset,ans);
        return ans;
    }
    */
    /*
    // Practice 1
    void helper(vector<int> &nums, int i, vector<int> &subset, vector<vector<int>> &powerSet) {
        if(i>=nums.size()) {
            powerSet.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        helper(nums,i+1,subset,powerSet);
        subset.pop_back();
        helper(nums,i+1,subset,powerSet);
    }
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<int> subset;
        vector<vector<int>> powerSet;
        helper(nums,0,subset,powerSet);
        return powerSet;
    }
    */
    /*
    // Practice 2
    void helper(vector<int> &nums, int i, vector<int> &subset, vector<vector<int>> &res) {
        if(i>=nums.size()) {
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        helper(nums,i+1,subset,res);
        subset.pop_back();
        helper(nums,i+1,subset,res);
    }
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<int> subset;
        vector<vector<int>> res;
        helper(nums,0,subset,res);
        return res;
    }
    */
    /*
    // Practice 3
    void helper(vector<int> &nums, int pos, vector<int> &subset, vector<vector<int>> &ans) {
        if(pos>=nums.size()) {
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[pos]);
        helper(nums,pos+1,subset,ans);
        subset.pop_back();
        helper(nums,pos+1,subset,ans);
    }
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<int> subset;
        vector<vector<int>> ans;
        helper(nums,0,subset,ans);
        return ans;
    }
    */
    /*
    // Practice 4
    void helper(vector<int> &nums, int i, vector<int> &subset, vector<vector<int>> &res) {
        if(i>=nums.size()) {
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        helper(nums,i+1,subset,res);
        subset.pop_back();
        helper(nums,i+1,subset,res);
    }
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<int> subset;
        vector<vector<int>> res;
        helper(nums,0,subset,res);
        return res;
    }
    */
    /*
    // Practice 5
    void helper(vector<int> &nums, int pos, vector<int> &subset, vector<vector<int>> &res) {
        if(pos>=nums.size()) {
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[pos]);
        helper(nums,pos+1,subset,res);
        subset.pop_back();
        helper(nums,pos+1,subset,res);
    }
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<int> subset;
        vector<vector<int>> res;
        helper(nums,0,subset,res);
        return res;
    }
    */
    /*
    // Practice 6
    void helper(vector<int> &nums, int pos, vector<int> &subset, vector<vector<int>> &res) {
        if(pos>=res.size()) {
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[pos]);
        helper(nums,pos+1,subset,res);
        subset.pop_back();
        helper(nums,pos+1,subset,res);
    }
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<vector<int>> res;
        vector<int> subset;
        helper(nums,0,subset,res);
        return res;
    }
    */
    /*
    // Practice 7
    void helper(int idx, vector<int> &nums, vector<int> &subset, vector<vector<int>> &res) {
        if(idx<0) {
            res.push_back(subset);
            return;
        }
        helper(idx-1,nums,subset,res);
        subset.push_back(nums[idx]);
        helper(idx-1,nums,subset,res);
        subset.pop_back();
    }
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<int> subset;
        vector<vector<int>> res;
        helper(nums.size()-1,nums,subset,res);
        return res;
    }
    */
    /*
    // Practice 8
    void helper(int i, vector<int> &nums, vector<int> &subset, vector<vector<int>> &power_set) {
        if(i==nums.size()) {
            power_set.push_back(subset);
            return;
        }
        // Take the element
        subset.push_back(nums[i]);
        helper(i+1,nums,subset,power_set);
        // Don't take the element
        subset.pop_back();
        helper(i+1,nums,subset,power_set);
    }
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<vector<int>> power_set;
        vector<int> subset;
        helper(0, nums, subset, power_set);
        return power_set;
    }
    */
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<vector<int>> res;
        int bits=nums.size();
        int limit=pow(2,bits);
        for(int i=0;i<limit;i++) {
            vector<int> temp;
            for(int j=0;j<bits;j++) {
                if(i & (1<<j)) temp.push_back(nums[j]);
            }
            res.push_back(temp);
        }
        return res;
    }
}; 