class Solution {
public:
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
};