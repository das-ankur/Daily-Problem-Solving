class Solution {
public:
    bool compare(string &s1, string &s2) {
        if(s1.size()!=1+s2.size()) return false;
        int first=0, second=0;
        while(first<s1.size()) {
            if(second<s2.size() && s1[first]==s2[second]) {
                first++;
                second++;
            }
            else first++;
        }
        if(first==s1.size() && second==s2.size()) return true;
        else return false;
    }
    static bool comp(string &s1, string &s2) {
        return s1.size()<s2.size();
    }
    int longestStrChain(vector<string>& words) {
        int n=words.size();
        vector<int> dp(n,1);
        sort(words.begin(), words.end(), comp);
        int res=1;
        for(int i=1;i<n;i++) {
            for(int prev=0;prev<i;prev++) {
                if(compare(words[i],words[prev]) && (dp[prev]+1>dp[i])) dp[i]=1+dp[prev];
                res=max(res,dp[i]);
            }
        }
        return res;
    }
};