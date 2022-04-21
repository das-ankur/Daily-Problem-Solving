class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0 || matrix[0].size()==0)
            return false;
        int row, low=0, high=matrix.size()-1;
        while(high-low>1) {
            int mid=(low+high)/2;
            if(matrix[mid][0]>=target)
                high=mid;
            else
                low=mid;
        }
        if(matrix[high][0]<=target)
            row=high;
        else
            row=low;
        low=0, high=matrix[0].size()-1;
        while(low<=high) {
            int mid=(low+high)/2;
            if(matrix[row][mid]==target)
                return true;
            else if(matrix[row][mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        return false;
    }
};