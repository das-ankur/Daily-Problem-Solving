class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        /*
        // Using Set
        set<int> cols;
        set<int> rows;
        int m=matrix.size(), n=matrix[0].size();
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(matrix[i][j]==0) {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        for(auto it=rows.begin();it!=rows.end();it++) {
            int r=*it;
            for(int k=0;k<n;k++)
                matrix[r][k]=0;
        }
        for(auto it=cols.begin();it!=cols.end();it++) {
            int c=*it;
            for(int k=0;k<m;k++)
                matrix[k][c]=0;
        }
        */
        // Taking two external dummy array
        int m=matrix.size(), n=matrix[0].size();
        vector<int> rows(m);
        vector<int> cols(n);
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(matrix[i][j]==0) {
                    rows[i]=1;
                    cols[j]=1;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++) {
                if(rows[i]==1 || cols[j]==1)
                    matrix[i][j]=0;
            }
        }
    }
};