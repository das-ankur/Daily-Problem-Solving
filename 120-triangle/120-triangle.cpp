#include<bits/stdc++.h>
class Solution {
public:
    int helper(vector<vector<int>> & triangle, int row, int idx, vector<vector<int>> &t) {
        if(row>=triangle.size())
            return 0;
        if(t[row][idx]!=-1)
            return t[row][idx];
        return t[row][idx]=min(triangle[row][idx]+helper(triangle, row+1, idx, t),
                   triangle[row][idx]+helper(triangle, row+1, idx+1, t));
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> t(triangle.size(),vector<int>(triangle[triangle.size()-1].size(),-1));
        return helper(triangle, 0, 0, t);
    }
};