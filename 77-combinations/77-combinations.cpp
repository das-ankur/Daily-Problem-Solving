class Solution {
public:
    /*
    void helper(int i, int k, int n, vector<int> &subset, vector<vector<int>> &ans) {
        if(k==0) {
            ans.push_back(subset);
            return;
        }
        if(i>n) return;
        if(k>n-i+1) return;
        subset.push_back(i);
        helper(i+1,k-1,n,subset,ans);
        subset.pop_back();
        helper(i+1,k,n,subset,ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> subset;
        vector<vector<int>> ans;
        helper(1,k,n,subset,ans);
        return ans;
    }
    */
    /*
    // Practice 1
    void helper(int i, int k, int n, vector<int> &subset, vector<vector<int>> &combinations) {
        if(k==0)  {
            combinations.push_back(subset);
            return;
        }
        if(i>n) return;
        if(k>n-i+1) return;
        subset.push_back(i);
        helper(i+1,k-1,n,subset,combinations);
        subset.pop_back();
        helper(i+1,k,n,subset,combinations);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> subset;
        vector<vector<int>> combinations;
        helper(1,k,n,subset,combinations);
        return combinations;
    }
    */
    /*
    void helper(int i, int k, int n, vector<int> &subset, vector<vector<int>> &res) {
        if(k==0) {
            res.push_back(subset);
            return;
        }
        if(k>n-i+1) return;
        if(i>n) return;
        subset.push_back(i);
        helper(i+1,k-1,n,subset,res);
        subset.pop_back();
        helper(i+1,k,n,subset,res);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> subset;
        helper(1,k,n,subset,res);
        return res;
    }
    */
    void helper(int i, int n, int k, vector<int> &subset, vector<vector<int>> &res) {
        if(k==0) {
            res.push_back(subset);
            return;
        }
        if(i>n) return;
        if(k>n-i+1) return;
        subset.push_back(i);
        helper(i+1,n,k-1,subset,res);
        subset.pop_back();
        helper(i+1,n,k,subset,res);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> subset;
        helper(1,n,k,subset,res);
        return res;
    }
};