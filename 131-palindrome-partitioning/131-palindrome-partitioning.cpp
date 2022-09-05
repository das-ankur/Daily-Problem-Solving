class Solution {
public:
    /*
    bool isPalindrome(string s, int start, int end) {
        bool flag=true;
        for(int i=start,j=end;i<=j;i++,j--) {
            if(s[i]!=s[j]) {
                flag=false;
                break;
            }
        }
        return flag;
    }
    void helper(int idx, string s, vector<string> &subset, vector<vector<string>> &res) {
        if(idx==s.size()) {
            res.push_back(subset);
            return;
        }
        for(int i=idx;i<s.size();i++) {
            if(isPalindrome(s,idx,i)) {
                subset.push_back(s.substr(idx,i-idx+1));
                helper(i+1,s,subset,res);
                subset.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> subset;
        vector<vector<string>> res;
        helper(0,s,subset,res);
        return res;
    }
    */
    bool isPalindrome(string str, int start, int end) {
        int i=start, j=end;
        while(i<=j) {
            if(str[i]!=str[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    void helper(int idx, string s, vector<string> &subset, vector<vector<string>> &res) {
        if(idx==s.size()) {
            res.push_back(subset);
            return;
        }
        for(int i=idx;i<s.size();i++) {
            if(isPalindrome(s,idx,i)) {
                subset.push_back(s.substr(idx,i-idx+1));
                helper(i+1,s,subset,res);
                subset.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> subset;
        vector<vector<string>> res;
        helper(0,s,subset,res);
        return res;
    }
};