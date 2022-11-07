class Solution {
public:
    /*
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_begin=0, row_end=matrix.size()-1, col_begin=0, col_end=matrix[0].size()-1,row,col;
        while(row_end-row_begin>1) {
            int mid=(row_end+row_begin)/2;
            if(matrix[mid][0]>target) row_end=mid-1;
            else row_begin=mid;
        }
        if(matrix[row_end][0]<=target) row=row_end;
        else row=row_begin;
        while(col_begin<=col_end) {
            int mid=(col_begin+col_end)/2;
            if(matrix[row][mid]<target) col_begin=mid+1;
            else if(matrix[row][mid]>target) col_end=mid-1;
            else return true;
        }
        return false;
    }
    */
    // Practice 1
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0, high=matrix.size()-1;
        while(high-low>1) {
            int mid=low+(high-low)/2;
            if(matrix[mid][0]<=target) low=mid;
            else high=mid-1;
        }
        int row=matrix[high][0]<=target?high:low;
        low=0, high=matrix[0].size()-1;
        while(low<=high) {
            int mid=low+(high-low)/2;
            if(matrix[row][mid]==target) return true;
            if(matrix[row][mid]>target) high=mid-1;
            else low=mid+1;
        }
        return false;
    }
};