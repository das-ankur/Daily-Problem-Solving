class Solution {
public:
    /*
    // Recursion
    int helper(int i, int j, string &word1, string &word2) {
        if(i<0) return j+1;
        if (j<0) return i+1;
        if(word1[i]==word2[j]) return helper(i-1,j-1,word1,word2);
        else return 1+min(helper(i-1,j,word1,word2), min(helper(i,j-1,word1,word2),helper(i-1,j-1,word1,word2)));
    }
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        return helper(m-1,n-1,word1,word2);
    }
    */
    
    // Memoization
    int helper(int i, int j, string &word1, string &word2, vector<vector<int>> &memo) {
        if(i<0) return j+1;
        if (j<0) return i+1;
        if(memo[i][j]!=-1) return memo[i][j];
        if(word1[i]==word2[j]) return memo[i][j]=helper(i-1,j-1,word1,word2,memo);
        else return memo[i][j]=1+min(helper(i-1,j,word1,word2,memo), min(helper(i,j-1,word1,word2,memo),helper(i-1,j-1,word1,word2,memo)));
    }
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        vector<vector<int>> memo(m,vector<int>(n,-1));
        return helper(m-1,n-1,word1,word2,memo);
    }
};