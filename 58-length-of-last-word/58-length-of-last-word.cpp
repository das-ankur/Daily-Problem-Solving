class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        if(n==1 && s!=" ")
            return 1;
        if(n==1 && s==" ")
            return 0;
        int count=0, word_count=0;
        for(int i=n-1;i>=0;i--) {
            if(s[i]==' ' && count==0)
                continue;
            else if(s[i]==' ' && count==1)
                break;
            else {
                count=1;
                word_count++;
            }
        }
        return word_count;
    }
};