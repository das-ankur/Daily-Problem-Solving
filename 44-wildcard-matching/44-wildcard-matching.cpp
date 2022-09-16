class Solution {
public:
    /*
    // Recursion
    bool isAllStars(string &p, int i) {
        while(i>=0) {
            if(p[i]!='*') return false;
            i--;
        }
        return true;
    }
    bool helper(int i, int j, string &s, string &p) {
        if(i<0 && j<0) return true;
        if(i<0 && j>=0) return false;
        if(i>=0 && j<0) return isAllStars(p,i);
        if(s[i]==p[j]) return helper(i-1,j-1,s,p);
        else {
            if(p[j]=='?') return helper(i-1,j-1,s,p);
            else if(p[j]=='*') return helper(i-1,j,s,p) || helper(i,j-1,s,p);
            else return false;
        }
    }
    bool isMatch(string s, string p) {
        return helper(s.size()-1, p.size()-1, s, p);
    }
    */
    
    /*
    // Memoization
    bool isAllStars(string &p, int j) {
        for(int k=0 ; k<=j; k++){
            if(p[k] != '*')
                return false;
        }
        return true;
    }
    bool helper(int i, int j, string &s, string &p, vector<vector<int>> &memo) {
        if(i<0 && j<0) return true;
        if(i<0 && j>=0) return isAllStars(p,j);
        if(i>=0 && j<0) return false;
        if(memo[i][j]!=-1) return memo[i][j];
        if(s[i]==p[j]) return memo[i][j]=helper(i-1,j-1,s,p,memo);
        else {
            if(p[j]=='?') return memo[i][j]=helper(i-1,j-1,s,p,memo);
            else if(p[j]=='*') return memo[i][j]=helper(i-1,j,s,p,memo) || helper(i,j-1,s,p,memo);
            else return false;
        }
    }
    bool isMatch(string s, string p) {
        int m= s.size();
        int n=p.size();
        vector<vector<int>> memo(m, vector<int>(n,-1));
        return helper(m-1, n-1, s, p, memo);
    }
    */
    
    /*
    // Tabulation
    bool isAllStars(string &p, int j) {
        for(int k=0 ; k<=j; k++){
            if(p[k] != '*')
                return false;
        }
        return true;
    }
    bool isMatch(string s, string p) {
        int m=s.size();
        int n=p.size();
        vector<vector<bool>> table(m+1,vector<bool>(n+1,false));
        table[0][0]=true;
        for(int j=1;j<=n;j++) table[0][j]=isAllStars(p,j-1);
        for(int i=1;i<=m;i++) table[i][0]=false;
        for(int i=1;i<=m;i++) {
            for(int j=1;j<=n;j++) {
                if(s[i-1]==p[j-1]) table[i][j]=table[i-1][j-1];
                else {
                    if(p[j-1]=='?') table[i][j]=table[i-1][j-1];
                    else if(p[j-1]=='*') table[i][j]=table[i-1][j] || table[i][j-1];
                    else table[i][j]=false;
                }
            }
        }
        return table[m][n];
    }
    */
    
    // Space Optimization
    bool isAllStars(string &p, int j) {
        for(int k=0 ; k<=j; k++){
            if(p[k] != '*')
                return false;
        }
        return true;
    }
    bool isMatch(string s, string p) {
        int m=s.size();
        int n=p.size();
        vector<bool> prev(n+1,false);
        prev[0]=true;
        for(int j=1;j<=n;j++) prev[j]=isAllStars(p,j-1);
        for(int i=1;i<=m;i++) {
            vector<bool> curr(n+1,false);
            for(int j=1;j<=n;j++) {
                if(s[i-1]==p[j-1]) curr[j]=prev[j-1];
                else {
                    if(p[j-1]=='?') curr[j]=prev[j-1];
                    else if(p[j-1]=='*') curr[j]=prev[j] || curr[j-1];
                    else curr[j]=false;
                }
            }
            prev=curr;
        }
        return prev[n];
    }
};