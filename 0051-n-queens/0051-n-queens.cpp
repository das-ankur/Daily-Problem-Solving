class Solution {
public:
    bool safe(int row, int col, int n, vector<string> &board) {
        int trow=row, tcol=col;
        while(row>=0 && col>=0) {
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }
        row=trow, col=tcol;
        while(row<n && col>=0) {
            if(board[row][col]=='Q') return false;
            row++;
            col--;
        }
        row=trow, col=tcol;
        while(col>=0) {
            if(board[row][col]=='Q') return false;
            col--;
        }
        return true;
    }
    void helper(int col, int n, vector<string> &board, vector<vector<string>> &res) {
        if(col==n) {
            res.push_back(board);
            return;
        }
        for(int row=0;row<n;row++) {
            if(safe(row,col,n,board)) {
                board[row][col]='Q';
                helper(col+1,n,board,res);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> board(n);
        string row(n, '.');
        for(int i=0;i<n;i++) board[i]=row;
        helper(0,n,board,res);
        return res;
    }
};