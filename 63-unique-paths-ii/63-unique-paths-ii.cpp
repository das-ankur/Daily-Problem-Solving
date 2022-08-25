class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<int> prev(n,0);
        for(int i=0;i<m;i++) {
            vector<int> temp(n,0);
            for(int j=0;j<n;j++) {
                if(i==0 && j==0 && obstacleGrid[i][j]==0) {
                    temp[j]=1;
                    continue;
                }
                if(obstacleGrid[i][j]==1) temp[j]=0;
                else {
                    int up=0,left=0;
                    if(i-1>=0) up=prev[j];
                    if(j-1>=0) left=temp[j-1];
                    temp[j]=up+left;
                }
            }
            prev=temp;
        }
        return prev[n-1];
    }
};