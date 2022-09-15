class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int m=str1.size();
        int n=str2.size();
        vector<vector<int>> table(m+1,vector<int>(n+1,-1));
        for(int i=0;i<=m;i++) {
            for(int j=0;j<=n;j++) {
                if(i==0 || j==0) table[i][j]=0;
                else {
                    if(str1[i-1]==str2[j-1]) table[i][j]=1+table[i-1][j-1];
                    else table[i][j]=max(table[i-1][j],table[i][j-1]);
                }
            }
        }
        string res;
        int i=m, j=n;
        while(i>0 && j>0) {
            if(str1[i-1]==str2[j-1])  {
                res.push_back(str1[i-1]);
                i--;
                j--;
            }
            else {
                if(table[i-1][j]>table[i][j-1]) {
                   res.push_back(str1[i-1]);
                   i--;
                }
                else {
                    res.push_back(str2[j-1]);
                    j--;
                }
            }
        }
        while(i>0) {
            res.push_back(str1[i-1]);
            i--;
        }
        while(j>0) {
            res.push_back(str2[j-1]);
            j--;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};