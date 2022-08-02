#include<bits/stdc++.h>
class Solution {
public:
    /*
    void helper(vector<int> &arr, int pos, vector<int> &subset, vector<vector<int>> &powerSet) {
        if(pos>=arr.size()) {
            powerSet.push_back(subset);
            return;
        }
        subset.push_back(arr[pos]);
        helper(arr,pos+1,subset,powerSet);
        subset.pop_back();
        while(pos+1<arr.size() && arr[pos]==arr[pos+1])
            pos++;
        helper(arr,pos+1,subset,powerSet);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> powerSet;
        sort(nums.begin(), nums.end());
        helper(nums,0,subset,powerSet);
        sort(powerSet.begin(), powerSet.end());
        return powerSet;
    }
    */
    /*
    // Practice 1
    void helper(vector<int> &nums, int pos, vector<int> &subset, vector<vector<int>> &powerSet) {
        if(pos>=nums.size()) {
            powerSet.push_back(subset);
             return;
        }
        subset.push_back(nums[pos]);
        helper(nums,pos+1,subset,powerSet);
        subset.pop_back();
        while(pos+1<nums.size() && nums[pos]==nums[pos+1]) pos++;
        helper(nums, pos+1,subset,powerSet);
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> powerSet;
        vector<int> subset;
        helper(nums,0,subset,powerSet);
        return powerSet;
    }
    */
    /*
    // Practice 2
    void helper(vector<int> &nums, int pos, vector<int> &subset, vector<vector<int>> &res) {
        if(pos>=nums.size()) {
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[pos]);
        helper(nums,pos+1,subset,res);
        subset.pop_back();
        while(pos+1<nums.size() && nums[pos]==nums[pos+1]) pos++;
        helper(nums,pos+1,subset,res);
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums) {
        vector<vector<int>> res;
        vector<int> subset;
        sort(nums.begin(),nums.end());
        helper(nums,0,subset,res);
        return res;
    }
    */
    /*
    // Practice 3
    void helper(vector<int> &nums, int pos, vector<int> &subset, vector<vector<int>> &res) {
        if(pos>=nums.size()) {
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[pos]);
        helper(nums,pos+1,subset,res);
        subset.pop_back();
        while(pos+1<nums.size() && nums[pos]==nums[pos+1]) pos++;
        helper(nums,pos+1,subset,res);
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums) {
        sort(nums.begin(),nums.end());
        vector<int> subset;
        vector<vector<int>> res;
        helper(nums,0,subset,res);
        return res;
    }
    */
    /*
    // Practice 4
    void helper(vector<int> &nums, int pos, vector<int> &subset, vector<vector<int>> &res) {
        if(pos>=nums.size()) {
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[pos]);
        helper(nums,pos+1,subset,res);
        while(pos+1<nums.size() && nums[pos]==nums[pos+1]) pos++;
        subset.pop_back();
        helper(nums,pos+1,subset,res);
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> subset;
        helper(nums,0,subset,res);
        return res;
    }*/
    // Practice 5
    void helper(vector<int> &nums, int pos, vector<int> &subset, vector<vector<int>> &res) {
        if(pos>=nums.size()) {
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[pos]);
        helper(nums,pos+1,subset,res);
        while(pos+1<nums.size() && nums[pos]==nums[pos+1]) pos++;
        subset.pop_back();
        helper(nums,pos+1,subset,res);
    }
    vector<vector<int>> subsetsWithDup(vector<int> nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> subset;
        helper(nums,0,subset,res);
        return res;
    }
};