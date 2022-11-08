class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size(), m=mat[0].size();
        int startCol=0, endCol=m-1;
        while(startCol<=endCol) {
            int midCol=startCol+(endCol-startCol)/2;
            int maxRow=0;
            for(int i=0;i<n;i++) maxRow=mat[maxRow][midCol]>=mat[i][midCol]?maxRow:i;
            bool isLeftBig=midCol-1>=startCol && mat[maxRow][midCol-1]>mat[maxRow][midCol];
            bool isRightBig=midCol+1<=endCol && mat[maxRow][midCol+1]>mat[maxRow][midCol];
            if(!isLeftBig && !isRightBig) return {maxRow,midCol};
            else if(isLeftBig) endCol=midCol-1;
            else startCol=midCol+1;
        }
        return {-1,-1};
    }
};