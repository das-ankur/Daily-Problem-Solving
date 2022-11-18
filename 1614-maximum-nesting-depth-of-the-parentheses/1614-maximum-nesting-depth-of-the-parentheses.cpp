class Solution {
public:
    int maxDepth(string s) {
        int max_depth=0;
        for(int i=0, cur_depth=0;i<s.size();i++) {
            if(s[i]=='(') cur_depth++;
            else if(s[i]==')') cur_depth--;
            max_depth=max(max_depth,cur_depth);
        }
        return max_depth;
    }
};