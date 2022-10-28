class Solution {
public:
    /*
    // Recursion
    bool helper(int i, string &s, unordered_set<string> &words) {
        if(i>=s.size()) return true;
        string subs;
        for(int k=i;k<s.size();k++) {
            subs.push_back(s[k]);
            if(words.find(subs)!=words.end()) return helper(k+1,s,words);
        }
        return false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> words;
        for(string x:wordDict) words.insert(x);
        return helper(0,s,words);
    }
    */
    /*
    // Memoization
    bool helper(int i, string &s, unordered_set<string> &words, vector<int> &memo) {
        if(i>=s.size()) return true;
        if(memo[i]!=-1) return memo[i];
        string subs;
        for(int k=i;k<s.size();k++) {
            subs.push_back(s[k]);
            if(words.find(subs)!=words.end()) {
                if(helper(k+1,s,words,memo)) {
                    memo[i]=1;
                    return true;
                }
            }
        }
        memo[i]=0;
        return false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> words;
        vector<int> memo(s.size(), -1);
        for(string x:wordDict) words.insert(x);
        return helper(0,s,words,memo);
    }
    */
    // Tabulation
     bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        unordered_set<string> words;
        for(string x:wordDict) words.insert(x);
        vector<int> table(n+1, 0);
        table[n]=1;
        for(int i=n-1;i>=0;i--) {
            string subs;
            for(int k=i;k<s.size();k++) {
                subs.push_back(s[k]);
                if(words.find(subs)!=words.end()) {
                    if(table[k+1]==1) {
                        table[i]=1;
                        continue;
                    }
                }
            }
        }
        return table[0]==1;
    }
};