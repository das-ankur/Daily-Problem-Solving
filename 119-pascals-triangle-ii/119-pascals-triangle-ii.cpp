class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n=rowIndex+1;
        vector<int>row(n);
        row[0]=row[n-1]=1;
        for(int i=1;i<n-1;i++) {
            long long int temp=(long long int)row[i-1]*(long long int)(n-i);
            temp/=i;
            row[i]=temp;
        }
        return row;
    }
};