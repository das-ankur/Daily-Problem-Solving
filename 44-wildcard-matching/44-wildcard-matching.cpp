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
};