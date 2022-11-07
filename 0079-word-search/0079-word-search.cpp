class Solution {
public:
    /*
    bool helper(int i, int j, int k, int m, int n, string &word, vector<vector<char>> &board, vector<vector<bool>> &visited) {
        if(k==word.size()) return true;
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]!=word[k] || visited[i][j]) return false;
        char ch=board[i][j];
        board[i][j]='#';
        bool op1=helper(i-1,j,k+1,m,n,word,board,visited);
        bool op2=helper(i+1,j,k+1,m,n,word,board,visited);
        bool op3=helper(i,j-1,k+1,m,n,word,board,visited);
        bool op4=helper(i,j+1,k+1,m,n,word,board,visited);
        board[i][j]=ch;
        return op1||op2||op3||op4;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(board[i][j]==word[0]) {
                    vector<vector<bool>> visited(m,vector<bool>(n,false));
                    bool res=helper(i,j,0,m,n,word,board,visited);
                    if(res) return true;
                }
            }
        }
        return false;
    }
    */
    // Practice 1
    bool helper(int i, int j, int k, int m, int n, vector<vector<char>> &board, string &word) {
        if(k==word.size()) return true;
        if(i<0 || i>=m || j<0 || j>=n || board[i][j]!=word[k]) return false;
        char ch=board[i][j];
        board[i][j]='#';
        bool op1=helper(i+1,j,k+1,m,n,board,word);
        bool op2=helper(i-1,j,k+1,m,n,board,word);
        bool op3=helper(i,j+1,k+1,m,n,board,word);
        bool op4=helper(i,j-1,k+1,m,n,board,word);
        board[i][j]=ch;
        return op1||op2||op3||op4;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(), n=board[0].size();
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(board[i][j]==word[0]) {
                    bool res=helper(i,j,0,m,n,board,word);
                    if(res) return true;
                }
            }
        }
        return false;
    }
};