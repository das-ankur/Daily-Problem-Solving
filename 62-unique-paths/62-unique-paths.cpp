class Solution {
public:
    /*
    // Recursion
    int helper(int row, int col) {
        if(row==0 && col==0) return 1;
        int move_left=0, move_up=0;
        if(col>=1) move_left=helper(row,col-1);
        if(row>=1) move_up=helper(row-1,col);
        return move_left+move_up;
    }
    int uniquePaths(int m, int n) {
        return helper(m-1,n-1);
    }
    */
    // Memoization
    int helper(int row, int col, vector<vector<int>> &memo) {
        if(row==0 && col==0) return 1;
        if(memo[row][col]!=-1) return memo[row][col];
        int move_left=0, move_up=0;
        if(col>=1) move_left=helper(row,col-1,memo);
        if(row>=1) move_up=helper(row-1,col,memo);
        return memo[row][col]=move_left+move_up;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> memo(m, vector<int>(n,-1));
        return helper(m-1,n-1,memo);
    }
};