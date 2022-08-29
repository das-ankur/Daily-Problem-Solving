class Solution {
public:
    /*
    // Recursion
    int helper(int row, int col, int m, int n, vector<vector<int>> &matrix) {
        if(row==0) return matrix[row][col];
        int up=matrix[row][col]+helper(row-1,col,m,n,matrix);
        int up_left=INT_MAX, up_right=INT_MAX;
        if(col-1>=0) up_left=matrix[row][col]+helper(row-1,col-1,m,n,matrix);
        if(col+1<n) up_right=matrix[row][col]+helper(row-1,col+1,m,n,matrix);
        return min(up, min(up_left, up_right));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int path=INT_MAX;
        for(int j=0;j<n;j++) path=min(path, helper(m-1,j,m,n,matrix));
        return path;
    }
    */
    // mamoization
    int th=(int)(-1e9);
    int helper(int row, int col, int m, int n, vector<vector<int>> &matrix, vector<vector<int>> &memo) {
        if(row==0) return matrix[row][col];
        if(memo[row][col]!=th) return memo[row][col];  
        int up=matrix[row][col]+helper(row-1,col,m,n,matrix,memo);
        int up_left=INT_MAX, up_right=INT_MAX;
        if(col-1>=0) up_left=matrix[row][col]+helper(row-1,col-1,m,n,matrix,memo);
        if(col+1<n) up_right=matrix[row][col]+helper(row-1,col+1,m,n,matrix,memo);
        return memo[row][col]=min(up, min(up_left, up_right));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> memo(m, vector<int>(n,th));
        int path=INT_MAX;
        for(int j=0;j<n;j++) path=min(path, helper(m-1,j,m,n,matrix,memo));
        return path;
    }
};