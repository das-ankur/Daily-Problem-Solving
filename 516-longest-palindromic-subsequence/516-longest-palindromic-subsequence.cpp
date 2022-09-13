class Solution {
public:
    /*
    // Recursion
    int helper(int i, int j, string &s) {
        if(i>j) return 0;
        if(s[i]==s[j]) return 2+helper(i+1,j-1,s);
        else return max(helper(i+1,j,s), helper(i,j-1,s));
    }
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        return helper(0,n-1,s);
    }
    */
    
    /*
    // Memoization: Time Limit Exceeded
    int helper(int i, int j, string &s,vector<vector<int>> &memo) {
        if(i>j) return 0;
        if(i==j) return 1;
        if(s[i]==s[j]) return memo[i][j]=2+helper(i+1,j-1,s,memo);
        else return memo[i][j]=max(helper(i+1,j,s,memo), helper(i,j-1,s,memo));
    }
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        vector<vector<int>> memo(n,vector<int>(n,-1));
        return helper(0,n-1,s,memo);
    }
    */
     // Memoization: Reverse the string and find longest common subsequence
    int lcs(string &s1, string &s2) {
        int n=s1.size();
        vector<vector<int>> table(n+1,vector<int>(n+1,-1));
        for(int i=0;i<=n;i++) {
            for(int j=0;j<=n;j++) {
                if(i==0 || j==0) table[i][j]=0;
                else {
                    if(s1[i-1]==s2[j-1]) table[i][j]=1+table[i-1][j-1];
                    else table[i][j]=max(table[i-1][j],table[i][j-1]);
                }
            }
        }
        return table[n][n];
    }
    int longestPalindromeSubseq(string s) {
        string t=s;
        reverse(s.begin(),s.end());
        return lcs(t,s);
    }
};