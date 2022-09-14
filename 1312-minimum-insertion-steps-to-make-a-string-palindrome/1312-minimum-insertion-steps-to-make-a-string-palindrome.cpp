class Solution {
public:
    int minInsertions(string s) {
        int n=s.size();
        vector<vector<int>> table(n+1, vector<int>(n+1,-1));
        string s1=s;
        string s2=s;
        reverse(s2.begin(),s2.end());
        for(int i=0;i<=n;i++) {
            for(int j=0;j<=n;j++) {
                if(i==0 || j==0) table[i][j]=0;
                else {
                    if(s1[i-1]==s2[j-1]) table[i][j]=1+table[i-1][j-1];
                    else table[i][j]=max(table[i-1][j],table[i][j-1]);
                }
            }
        }
        return s.size()-table[n][n];
    }
};