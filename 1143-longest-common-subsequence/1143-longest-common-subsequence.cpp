class Solution {
public:
    /*
    // Recursion
    int helper(int i, int j, string &s1, string &s2) {
        if(i==0 || j==0) return 0;
        if(s1[i-1]==s2[j-1]) return 1+helper(i-1,j-1,s1,s2);
        else return max(helper(i-1,j,s1,s2), helper(i,j-1,s1,s2));
    }
    int longestCommonSubsequence(string text1, string text2) {
        return helper(text1.size(),text2.size(),text1,text2);
    }
    */
    
    /*
    // Memoization
    int helper(int i, int j, string &s1, string &s2, vector<vector<int>> &memo) {
        if(i==0 || j==0) return 0;
        if(memo[i][j]!=-1) return memo[i][j];
        if(s1[i-1]==s2[j-1]) return memo[i][j]=1+helper(i-1,j-1,s1,s2,memo);
        else return memo[i][j]=max(helper(i-1,j,s1,s2,memo), helper(i,j-1,s1,s2,memo));
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> memo(text1.size()+1, vector<int>(text2.size()+1,-1));
        return helper(text1.size(),text2.size(),text1,text2,memo);
    }
    */
    
    
    // Tabulation
    int longestCommonSubsequence(string s1, string s2) {
        vector<vector<int>> table(s1.size()+1, vector<int>(s2.size()+1,-1));
        for(int i=0;i<=s1.size();i++) {
            for(int j=0;j<=s2.size();j++) {
                if(i==0 || j==0) table[i][j]=0;
                else {
                    if(s1[i-1]==s2[j-1]) table[i][j]=1+table[i-1][j-1];
                    else table[i][j]=max(table[i-1][j], table[i][j-1]);
                }
            }
        }
        return table[s1.size()][s2.size()];
    }
    
    /*
    // Space Optimization
    int longestCommonSubsequence(string text1, string text2) {
        vector<int> prev(text2.size(),0);
        for(int i=0;i<s1.size();i++) {
            vector<int> curr(text2.size(),0);
            for(int j=0;j<s2.size();j++) {
                if(i==0 || j==0) curr[j]=0;
                else {
                    if(s1[i-1]==s2[j-1]) curr[j]=1+prev[j-1];
                    else curr[j]=max(prev[j], curr[j-1]);
                }
            }
        }
        return prev[s2.size()-1];
    }
    */
};