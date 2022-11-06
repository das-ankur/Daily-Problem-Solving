class Solution {
public:
    /*
    void helper(vector<int> &arr, int i, vector<int> &subset, int sum, int target, vector<vector<int>> &ans) {
        if(sum==target) {
            ans.push_back(subset);
            return;
        }
        if(sum>target) return;
        if(i>=arr.size()) return;
        subset.push_back(arr[i]);
        sum+=arr[i];
        helper(arr,i,subset,sum,target,ans);
        subset.pop_back();
        sum-=arr[i];
        helper(arr,i+1,subset,sum,target,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> subset;
        vector<vector<int>> ans;
        helper(candidates,0,subset,0,target,ans);
        return ans;
    }
    */
    /*
    // Practice 1
    void helper(vector<int> &arr, int i, int sum, vector<int> &subset, vector<vector<int>> &res, int target) {
        if(sum==target) {
            res.push_back(subset);
            return;
        }
        if(i>=arr.size()) return;
        if(sum>target) return;
        subset.push_back(arr[i]);
        sum+=arr[i];
        helper(arr,i,sum,subset,res,target);
        sum-=arr[i];
        subset.pop_back();
        helper(arr,i+1,sum,subset,res,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> subset;
        helper(candidates,0,0,subset,res,target);
        return res;
    }
    */
    /*
    // Practice 2
    void helper(vector<int> &arr, int pos, int sum, int target, vector<int> &subset, vector<vector<int>> &res) {
        if(sum==target) {
            res.push_back(subset);
            return;
        }
        if(pos>=arr.size()) return;
        if(sum>target) return;
        subset.push_back(arr[pos]);
        sum+=arr[pos];
        helper(arr,pos,sum,target,subset,res);
        sum-=arr[pos];
        subset.pop_back();
        helper(arr,pos+1,sum,target,subset,res);
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
        vector<vector<int>> res;
        vector<int> subset;
        helper(candidates,0,0,target,subset,res);
        return res;
    }
    */
    /*
    // Practice 3
    void helper(int pos, vector<int> &arr, int sum, int target, vector<int> &subset, vector<vector<int>> &res) {
        if(sum==target) {
            res.push_back(subset);
            return;
        }
        if(sum>target) return;
        if(pos>=arr.size()) return;
        subset.push_back(arr[pos]);
        sum+=arr[pos];
        helper(pos,arr,sum,target,subset,res);
        subset.pop_back();
        sum-=arr[pos];
        helper(pos+1,arr,sum,target,subset,res);
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
        vector<vector<int>> res;
        vector<int> subset;
        helper(0,candidates,0,target,subset,res);
        return res;
    }*/
    /*
    // Practice 4
    void helper(int i, int sum, int target, vector<int> &candidates, vector<int> &subset, vector<vector<int>> &res) {
        if(sum==target) {
            res.push_back(subset);
            return;
        }
        if(sum>target) return;
        if(i>=candidates.size()) return;
        subset.push_back(candidates[i]);
        helper(i,sum+candidates[i],target,candidates,subset,res);
        subset.pop_back();
        helper(i+1,sum,target,candidates,subset,res);
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
        vector<int> subset;
        vector<vector<int>> res;
        helper(0,0,target,candidates,subset,res);
        return res;
    }
    */
    /*
    // Practice 5
    void helper(int idx, int target, vector<int> &nums, vector<int> &subset, vector<vector<int>> &res) {
        if(target==0) {
            res.push_back(subset);
            return;
        }
        if(idx>=nums.size()) return;
        if(target<0) return;
        subset.push_back(nums[idx]);
        helper(idx,target-nums[idx],nums,subset,res);
        subset.pop_back();
        helper(idx+1,target,nums,subset,res);
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
        vector<int> subset;
        vector<vector<int>> res;
        helper(0,target,candidates,subset,res);
        return res;
    }
    */
    void helper(int i, int n, int target, vector<int> &nums, vector<int> &subset, vector<vector<int>> &res) {
        if(target==0)  {
            res.push_back(subset);
            return;
        }
        if(i>=n) return;
        if(target<0) return;
        // Take
        subset.push_back(nums[i]);
        helper(i,n,target-nums[i],nums,subset,res);
        // Skip
        subset.pop_back();  // Backtracking
        helper(i+1,n,target,nums,subset,res);
    }
    // Practice 6
    vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
        int n=candidates.size();
        vector<int> subset;
        vector<vector<int>> res;
        helper(0,n,target,candidates,subset,res);
        return res;
    }
};