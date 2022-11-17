class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix;
        int min_len=INT_MAX;
        for(int i=0;i<strs.size();i++) min_len=min_len<=strs[i].size()?min_len:strs[i].size();
        for(int i=0;i<min_len;i++) {
            char ch=strs[0][i];
            for(int j=1;j<strs.size();j++) {
                if(strs[j][i]!=ch) return prefix;
            }
            prefix.push_back(ch);
        }
        return prefix;
    }
};