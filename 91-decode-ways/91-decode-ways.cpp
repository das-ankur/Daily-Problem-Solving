class Solution {
public:
    /*
    // Memoization
    int helper(int i, string &s, vector<int> &memo) {
        if(i==0) {
            if(s[i]=='0') return 0;
            else return 1;
        }
        if(memo[i]!=-1) return memo[i];
        int one_digit=0;
        if(s[i]!='0') one_digit=helper(i-1,s,memo);
        int two_digit=0;
        if(i-1>=0 && s[i-1]=='1' || (s[i-1]=='2' && s[i]<='6')) {
            if(i-2<0) two_digit=1;
            else two_digit=helper(i-2,s,memo);
        }
        return memo[i]=one_digit+two_digit;
    }
    int numDecodings(string s) {
        int n=s.size();
        vector<int> memo(n,-1);
        return helper(n-1,s,memo);
    }
    */
    /*
    // Tabulation
    int numDecodings(string s) {
        int n=s.size();
        vector<int> table(n,-1);
        if(s[0]=='0') return 0;
        table[0]=1;
        for(int i=1;i<n;i++) {
            int one_digit=0;
            if(s[i]!='0') one_digit=table[i-1];
            int two_digit=0;
            if(i-1>=0 && s[i-1]=='1' || (s[i-1]=='2' && s[i]<='6')) {
                if(i-2<0) two_digit=1;
                else two_digit=table[i-2];
            }
            table[i]=one_digit+two_digit;
        }
        return table[n-1];
    }*/
    // Space Optimization
    int numDecodings(string s) {
        int n=s.size();
        int prev2=0,prev1=1;
        if(s[0]=='0') return 0;
        for(int i=1;i<n;i++) {
            int one_digit=0;
            if(s[i]!='0') one_digit=prev1;
            int two_digit=0;
            if(i-1>=0 && s[i-1]=='1' || (s[i-1]=='2' && s[i]<='6')) {
                if(i-2<0) two_digit=1;
                else two_digit=prev2;
            }
            int cur=one_digit+two_digit;
            prev2=prev1;
            prev1=cur;
        }
        return prev1;
    }
};