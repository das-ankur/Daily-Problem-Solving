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
};