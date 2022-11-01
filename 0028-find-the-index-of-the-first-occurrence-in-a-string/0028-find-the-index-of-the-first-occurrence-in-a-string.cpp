class Solution {
public:
    /*
    // Naive Approach
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++) {
            if(haystack[i]==needle[0]) {
                int j,k;
                for(j=0,k=i;j<needle.size() && k<haystack.size();) {
                    if(haystack[k]==needle[j]) {
                        k++;
                        j++;
                    }
                    else break;
                }
                if(j==needle.size()) return i;
            }
        }
        return -1;
    }
    */
    // KMP Algorithm
    vector<int> prefix_count(string &s) {
        int n=s.size();
        vector<int> prefix(n,0);
        for(int i=1;i<n;i++) {
            int j=prefix[i-1];
            while(j>0 && s[i]!=s[j]) j=prefix[j-1];
            if(s[i]==s[j]) j++;
            prefix[i]=j;
        }
        return prefix;
        
    }
    int strStr(string haystack, string needle) {
        vector<int> prefix=prefix_count(needle);
        int pos=-1, i=0, j=0;
        while(i<haystack.size()) {
            if(haystack[i]==needle[j]) {
                i++;
                j++;
            }
            else {
                if(j==0) i++;
                else j=prefix[j-1];
            }
            if(j==needle.size()) {
                pos=i-needle.size();
                break;
            }
        }
        return pos;
    }
};