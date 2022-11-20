class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n==0) return "";
        if(n==1) return s;
        string ans;
        ans.push_back(s[0]);
        vector<vector<bool>> table(n,vector<bool>(n,false));
        for(int i=0;i<n;i++) table[i][i]=true;
        for(int i=n-1;i>=0;i--) {
            for(int j=i+1;j<n;j++) {
                if(s[i]==s[j] && (j-i==1 || table[i+1][j-1])) {
                    table[i][j]=true;
                    if(ans.size()<j-i+1) ans=s.substr(i,j-i+1);
                }
            }
        }
        return ans;
    }
};