class Solution {
public:
    bool isValid(string s) {
        /*
        stack<char> stk;
        bool flag=true;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                stk.push(s[i]);
            else {
                char temp;
                if(!stk.empty())
                    temp=stk.top();
                else
                    return false;
                if(s[i]==')' && temp!='(')
                    flag=false;
                else if(s[i]=='}' && temp!='{')
                    flag=false;
                else if(s[i]==']' && temp!='[')
                    flag=false;
                stk.pop();
            }
            if(!flag)
                break;
        }
        if(!stk.empty())
            return false;
        return flag;
        */
        stack<char> stk;
        bool flag=true;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                stk.push(s[i]);
            else {
                if(s[i]==')') {
                    if(stk.empty() || stk.top()=='{' || stk.top() == '[') {
                        flag=false;
                    }
                }
                else if(s[i]=='}') {
                    if(stk.empty() || stk.top()=='(' || stk.top() == '[') {
                        flag=false;
                    }
                }
                if(s[i]==']') {
                    if(stk.empty() || stk.top()=='{' || stk.top() == '(') {
                        flag=false;
                    }
                }
                stk.pop();
            }
            if(!flag)
                break;
        }
        if(stk.size()!=0)
            flag=false;
        return flag;
    }
};