class Solution {
public:
    /*
    void helper(string &digits, int i, string &s, vector<string> &res, unordered_map<char, string> &m) {
        if(i>=digits.size()) {
            res.push_back(s);
            return;
        }
        string temp=m[digits[i]];
        for(int j=0;j<temp.size();j++) {
            s.push_back(temp[j]);
            helper(digits,i+1,s,res,m);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.empty())
            return res;
        else {
            unordered_map<char, string> m;
            m['2']="abc";
            m['3']="def";
            m['4']="ghi";
            m['5']="jkl";
            m['6']="mno";
            m['7']="pqrs";
            m['8']="tuv";
            m['9']="wxyz";
            string s;
            helper(digits,0,s,res,m);
        }
        return res;
    }
    */
    /*
    // Practice 1
    void helper(string &digits, int pos, vector<string> &res, string &s, unordered_map<char,string> &m) {
        if(pos>=digits.size())  {
            res.push_back(s);
            return;
        }
        string temp=m[digits[pos]];
        for(int j=0;j<temp.size();j++) {
            s.push_back(temp[j]);
            helper(digits,pos+1,res,s,m);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.empty())
            return res;
        unordered_map<char, string> m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        string s;
        helper(digits,0,res,s,m);
        return res;
    }
    */
    /*
    void helper(string &digits,int pos,vector<string> &res, string &s,unordered_map<char,string> &m) {
        if(pos>=digits.size()) {
            res.push_back(s);
            return;
        }
        string temp=m[digits[pos]];
        for(int i=0;i<temp.size();i++) {
            s.push_back(temp[i]);
            helper(digits,pos+1,res,s,m);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.empty())
            return res;
        unordered_map<char,string> m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        string s;
        helper(digits,0,res,s,m);
        return res;
    }
    */
    /*
    // Practice 2
    void helper(string &digits, int pos, string &s, vector<string> &res, unordered_map<char,string> &m) {
        if(pos>=digits.size()) {
            res.push_back(s);
            return;
        }
        string temp=m[digits[pos]];
        for(char ch:temp) {
            s.push_back(ch);
            helper(digits,pos+1,s,res,m);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.empty()) return res;
        unordered_map<char, string> m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        string s;
        helper(digits,0,s,res,m);
        return res;
    }
    */
    /*
    //Practice 3
    void helper(string &digits, int idx, string &s, unordered_map<char,string> &m, vector<string> &res) {
        if(idx>=digits.size()) {
            res.push_back(s);
            return;
        }
        string temp=m[digits[idx]];
        for(char ch:temp) {
            s.push_back(ch);
            helper(digits,idx+1,s,m,res);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.empty()) return res;
        unordered_map<char,string> m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        string s;
        helper(digits,0,s,m,res);
        return res;
    }
    */
    // Practice 4
    void helper(string &s, int pos, string &subset, vector<string> &res, unordered_map<char,string> &m) {
        if(pos>=s.size()) {
            res.push_back(subset);
            return;
        }
        string temp=m[s[pos]];
        for(char ch:temp) {
            subset.push_back(ch);
            helper(s,pos+1,subset,res,m);
            subset.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.empty()) return res;
        unordered_map<char,string> m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        string subset;
        helper(digits,0,subset,res,m);
        return res;
    }
};
