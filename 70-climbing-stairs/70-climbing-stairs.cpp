class Solution {
public:
    /*
    //Time Limit Exceed
    int climb(int n, int step) {
        n-=step;
        if(n==0)
            return 1;
        if(n<0)
            return 0;
        return climb(n, 1)+climb(n, 2);
    }
    int climbStairs(int n) {
        long  long int count = 0;
        count+=climb(n, 1);
        count+=climb(n, 2);
        return count;
    }
    */
    int climbStairs(int n) {
        if(n<=2)
            return n;
        vector<int> table(n+1);
        table[0]=0;
        table[1]=1;
        table[2]=2;
        for(int i=3;i<=n;i++)
            table[i]=table[i-1]+table[i-2];
        return table[n];
    }
};