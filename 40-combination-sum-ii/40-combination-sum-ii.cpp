#include<bits/stdc++.h>
class Solution {
public:
    /*
    void helper(vector<int> &nums, int i, int sum, int target, vector<int> &subset, vector<vector<int>> &ans) {
        if(sum==target)  {
            ans.push_back(subset);
            return;
        }
        if(i>=nums.size()) return;
        if(sum>target) return;
        subset.push_back(nums[i]);
        sum+=nums[i];
        helper(nums,i+1,sum,target,subset,ans);
        subset.pop_back();
        sum-=nums[i];
        while(i+1<nums.size() && nums[i]==nums[i+1]) i++;
        helper(nums,i+1,sum,target,subset,ans);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> subset;
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        helper(candidates,0,0,target,subset,ans);
        return ans;
    }
    */
    void helper(vector<int> &arr, int pos, int sum, int target, vector<int> &subset, vector<vector<int>> &res) {
        if(sum==target) {
            res.push_back(subset);
            return;
        }
        if(sum>target) return;
        if(pos>=arr.size()) return;
        subset.push_back(arr[pos]);
        sum+=arr[pos];
        helper(arr,pos+1,sum,target,subset,res);
        sum-=arr[pos];
        subset.pop_back();
        while(pos+1<arr.size() && arr[pos]==arr[pos+1]) pos++;
        helper(arr,pos+1,sum,target,subset,res);
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> subset;
        vector<vector<int>> res;
        helper(candidates,0,0,target,subset,res);
        return res;
    }
};