class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix;
        for(int i=0;i<strs[0].size();i++) {
            bool flag=true;
            char temp=strs[0][i];
            for(int j=0;j<strs.size();j++) {
                if(strs[j][i]!=temp) {
                    flag=false;
                    break;
                }
            }
            if(flag)
                prefix.push_back(temp);
            else
                break;
        }
        return prefix;
    }
};