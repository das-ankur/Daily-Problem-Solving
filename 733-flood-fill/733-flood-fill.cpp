class Solution {
public:
    void helper(int i, int j, vector<vector<int>> &image, int m, int n, int color, int prev_color, vector<vector<bool>> &visited) {
        if(i<0 || j<0 || i>=m || j>=n) return;
        if(image[i][j]!=prev_color) return;
        if(visited[i][j]) return;
        image[i][j]=color;
        visited[i][j]=true;
        helper(i+1,j,image,m,n,color,prev_color,visited);
        helper(i-1,j,image,m,n,color,prev_color,visited);
        helper(i,j+1,image,m,n,color,prev_color,visited);
        helper(i,j-1,image,m,n,color,prev_color,visited);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image.size()==0) return image;
        int m=image.size();
        int n=image[0].size();
        int prev_color=image[sr][sc];
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        helper(sr,sc,image,m,n,color,prev_color,visited);
        return image;
    }
};
