class Solution {
public:
    /*
    void helper(int n, int open, int close, string &subset, vector<string> &res) {
        if(close>open) return;
        if(n==0) {
            if(open==close) res.push_back(subset);
            return;
        }
        subset.push_back('(');
        helper(n-1,open+1,close,subset,res);
        subset.pop_back();
        subset.push_back(')');
        helper(n-1,open,close+1,subset,res);
        subset.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        string subset;
        vector<string> res;
        helper(2*n,0,0,subset,res);
        return res;
    }
    */
    void helper(int open, int close, string &subset, vector<string> &res) {
        if(open==0 && close==0) {
            res.push_back(subset);
            return;
        }
        if(open<0 || close<0) return;
        if(open>close) return; 
        subset.push_back('(');
        helper(open-1,close,subset,res);
        subset.pop_back();
        subset.push_back(')');
        helper(open,close-1,subset,res);
        subset.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string subset;
        helper(n, n, subset, res);
        return res;
    }
};