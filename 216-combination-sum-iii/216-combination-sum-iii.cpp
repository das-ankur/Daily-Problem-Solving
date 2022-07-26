#include<bits/stdc++.h>
class Solution {
public:
    /*
    void helper(int i, int k, int n, vector<int> &subset, int sum, vector<vector<int>> &ans) {
        // if subset has k elements with sum n
        if(k==0 && sum==n) {
            ans.push_back(subset);
            return;
        }
        // if subset either has k elements or sum n but don't have both of these
        if(k==0 || sum>=n) return;
        // if recent digit cross the boundary 9
        if(i>9) return;
        // if we don't have suficent elements left to make the combination
        if(k>9-i+1) return;
        // Take the ith element
        subset.push_back(i);
        sum+=i;
        helper(i+1,k-1,n,subset,sum,ans);
        // Backtracking step
        subset.pop_back();
        sum-=i;
        // Ignore the ith element
        helper(i+1,k,n,subset,sum,ans);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        // To store partial comboinations
        vector<int> subset;
        // To store answer
        vector<vector<int>> ans;
        helper(1,k,n,subset,0,ans);
        return ans;
    }
    */
    /*
    // Practice 1
    void helper(int i, int n, int k, int sum, vector<int> &subset, vector<vector<int>> &res) {
        if(k==0 && sum==n) {
            res.push_back(subset);
            return;
        }
        if(k==0 || sum>=n) return;
        if(i>9) return;
        if(k>9-i+1) return;
        subset.push_back(i);
        sum+=i;
        helper(i+1,n,k-1,sum,subset,res);
        sum-=i;
        subset.pop_back();
        helper(i+1,n,k,sum,subset,res);
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> subset;
        helper(1,n,k,0,subset,res);
        return res;
    }
    */
    // Practice 2
    void helper(int i, int k, int n, vector<int> &subset, vector<vector<int>> &res) {
        if(k==0 && n==0) {
            res.push_back(subset);
            return;
        }
        if(k==0 || n<=0) return;
        if(k>9-i+1) return;
        if(i>9) return;
        subset.push_back(i);
        helper(i+1,k-1,n-i,subset,res);
        subset.pop_back();
        helper(i+1,k,n,subset,res);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> subset;
        vector<vector<int>> res;
        helper(1,k,n,subset,res);
        return res;
    }
};