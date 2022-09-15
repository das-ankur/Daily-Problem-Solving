class Solution {
public:
    /*
    // Recusrsion
    int helper(int i, int j, string &s, string &t) {
        if(j<0) return 1;
        if(i<0) return 0;
        if(s[i]==t[j]) return helper(i-1,j-1,s,t)+helper(i-1,j,s,t);
        else return helper(i-1,j,s,t);
    }
    int numDistinct(string s, string t) {
        return helper(s.size()-1,t.size()-1,s,t);
    }
    */ 
    
    /*
    // Memoization
    int helper(int i, int j, string &s, string &t, vector<vector<int>> &memo) {
        if(j==0) return 1;
        if(i==0) return 0;
        if(s[i-1]==t[j-1]) return memo[i][j]=helper(i-1,j-1,s,t,memo)+helper(i-1,j,s,t,memo);
        else return memo[i][j]=helper(i-1,j,s,t,memo);
    }
    int numDistinct(string s, string t) {
        int m=s.size();
        int n=t.size();
        vector<vector<int>> memo(m+1,vector<int>(n+1,-1));
        return helper(s.size(),t.size(),s,t,memo);
    }
    */
    
    // Tabulation
    int mod=1e9+7;
    int numDistinct(string s, string t) {
        int m=s.size();
        int n=t.size();
        vector<vector<int>> table(m+1,vector<int>(n+1,-1));
        for(int i=0;i<=m;i++) {
            for(int j=0;j<=n;j++) {
                if(j==0) table[i][j]=1;
                else if(i==0) table[i][j]=0;
                else {
                    if(s[i-1]==t[j-1]) table[i][j]=(table[i-1][j-1]+table[i-1][j])%mod;
                    else table[i][j]=table[i-1][j]%mod;
                }
            }
        }
        return table[m][n];
    }
};