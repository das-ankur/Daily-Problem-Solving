class Solution {
public:
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
};