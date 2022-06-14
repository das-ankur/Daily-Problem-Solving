class Solution {
public:
    string reverseWords(string s) {
        int prev=0, last=0;
        while(last<s.size()) {
            if(s[last]!=' ')
                last++;
            else {
                int j=last-1;
                int i=prev;
                while(i<=j) {
                    char temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                    i++;
                    j--;
                }
                prev=last+1;
                last++;
            }
        }
        int j=last-1;
        int i=prev;
        while(i<=j) {
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
        return s;
    }
};