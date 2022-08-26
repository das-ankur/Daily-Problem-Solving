class Solution {
public:
    /*
    // Recusrion
    int helper(int row, int col, vector<vector<int>> &grid) {
        if(row==0 && col==0) return grid[row][col];
        int up=(int)1e8, left=(int)1e8;
        if(row>=1) up=grid[row][col]+helper(row-1,col,grid);
        if(col>=1) left=grid[row][col]+helper(row,col-1,grid);
        return min(up,left); 
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        return helper(m-1, n-1, grid);
    }
    */
    /*
    // Memoization
    int helper(int row, int col, vector<vector<int>> &grid, vector<vector<int>> &memo) {
        if(row==0 && col==0) return grid[row][col];
        if(memo[row][col]!=-1) return memo[row][col];
        int up=(int)1e8, left=(int)1e8;
        if(row>=1) up=grid[row][col]+helper(row-1,col,grid,memo);
        if(col>=1) left=grid[row][col]+helper(row,col-1,grid,memo);
        return memo[row][col]=min(up,left); 
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> memo(m, vector<int>(n,-1));
        return helper(m-1, n-1, grid, memo);
    }
    */
    /*
    // Tabulation
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> table(m, vector<int>(n,0));
        table[0][0]=grid[0][0];
        for(int row=0;row<m;row++) {
            for(int col=0;col<n;col++) {
                if(row==0 && col==0) continue;
                int up=(int)1e8, left=(int)1e8;
                if(row>=1) up=grid[row][col]+table[row-1][col];
                if(col>=1) left=grid[row][col]+table[row][col-1];
                table[row][col]=min(up,left); 
            }
        }
        return table[m-1][n-1];
    }
    */
    // Space Optimization
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int> prev(n,0);
        for(int row=0;row<m;row++) {
            vector<int> cur(n,0);
            for(int col=0;col<n;col++) {
                if(row==0 && col==0) {
                    cur[row]=grid[0][0];
                    continue;
                }
                int up=(int)1e8, left=(int)1e8;
                if(row>=1) up=grid[row][col]+prev[col];
                if(col>=1) left=grid[row][col]+cur[col-1];
                cur[col]=min(up,left); 
            }
            prev=cur;
        }
        return prev[n-1];
    }
};