class Solution {
public:
    bool helper(string s, string p, int i, int j,vector<vector<int>> &dp) {
        // If pattern terminates then check if string also terminates return true otherwise false
        if(j==p.length())
            return i==s.length();
        // If subproblem is already solved
        if(dp[i][j]>=0)
            return dp[i][j];
        // Check ith and jth character is matching or not
        bool first_match=(i<s.length() && (s[i]==p[j] || p[j]=='.' ));
        bool ans=0;
        // If next charcter is *  then either generate empty string and skip the * by incrementing j by 2 or
        // generate p[j-1]th character in place of *
        if(j+1<p.length() && p[j+1]=='*')
        {
            ans= (helper(s,p,i,j+2,dp)|| (first_match && helper(s,p,i+1,j,dp) ));
        }
        else
        {
            // If there is no star go for the next character if ith and jth charcter is matching
            ans= (first_match && helper(s,p,i+1,j+1,dp));
        }
        // Store the result
        dp[i][j]=ans;
        return ans;
    }
    bool isMatch(string s, string p) {
        vector<vector<int>> dp(s.length()+1,vector<int>(p.length(),-1));
        return helper(s,p,0,0,dp);
    }
};