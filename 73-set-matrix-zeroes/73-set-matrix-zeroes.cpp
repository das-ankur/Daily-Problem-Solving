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
        /*
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
        */
        /*
        //First row and column as dummy  array
        //Most Optimized in respect to time and space complexcity
        int m=matrix.size(), n=matrix[0].size();
        bool col=false;
        for(int i=0;i<m;i++) {
            if(matrix[i][0]==0)
                col=true;
            for(int j=1;j<n;j++) {
                if(matrix[i][j]==0) {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=m-1;i>=0;i--) {
            for(int j=n-1;j>=1;j--) {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
            }
            if(col)
                matrix[i][0]=0;
        }
        */
        /*
        //Practice 1
        int m=matrix.size(), n=matrix[0].size();
        bool col=false;
        for(int i=0;i<m;i++) {
            if(matrix[i][0]==0)
                col=true;
            for(int j=1;j<n;j++) {
                if(matrix[i][j]==0) {
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        for(int i=m-1;i>=0;i--) {
            for(int j=n-1;j>0;j--) {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
            }
            if(col)
                matrix[i][0]=0;
        }
        */
        //Practice 2
        int m=matrix.size(), n=matrix[0].size();
        bool col=false;
        for(int i=0;i<m;i++) {
            if(matrix[i][0]==0)
                col=true;
            for(int j=1;j<n;j++) {
                if(matrix[i][j]==0) {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=m-1;i>=0;i--) {
            for(int j=n-1;j>0;j--) {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
            }
            if(col)
                matrix[i][0]=0;
        }
    }
};