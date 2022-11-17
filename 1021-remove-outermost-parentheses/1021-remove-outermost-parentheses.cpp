class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> stk;
        string res;
        for(char ch: s) {
            if(stk.empty()) stk.push(ch);
            else {
                if(ch==')') stk.pop();
                else stk.push(ch);
                if(!stk.empty()) res.push_back(ch);
            }
        }
        return res;
    }
};