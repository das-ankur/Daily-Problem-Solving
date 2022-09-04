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
    /*
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
    */
    /*
    // Practice 6
    void helper(int i, vector<int> &nums, vector<int> &subset, vector<vector<int>> &res) {
        if(i==nums.size()) {
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        helper(i+1,nums,subset,res);
        while(i+1<nums.size() && nums[i]==nums[i+1]) i++;
        subset.pop_back();
        helper(i+1,nums,subset,res);
    }
    vector<vector<int>> subsetsWithDup(vector<int> nums) {
        vector<int> subset;
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        helper(0,nums,subset,res);
        return res;
    }
    */
    // Practice 7
    void helper(int idx, vector<int> &nums, vector<int> &subset, vector<vector<int>> &res) {
        if(idx==nums.size())  {
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[idx]);
        helper(idx+1,nums,subset,res);
        while(idx+1<nums.size() && nums[idx]==nums[idx+1]) idx++;
        subset.pop_back();
        helper(idx+1,nums,subset,res);
    }
    vector<vector<int>> subsetsWithDup(vector<int> nums) {
        vector<int> subset;
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        helper(0,nums,subset,res);
        return res;
    }
};