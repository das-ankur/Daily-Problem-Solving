class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string res;
        int i=0, n=s.size();
        while(i<n) {
            if(s[i]==' ') i++;
            else {
                int j=i;
                while(j<n && s[j]!=' ') j++;
                for(int k=j-1;k>=i;k--) res.push_back(s[k]);
                i=j;
                res.push_back(' ');
            }
        }
        res.pop_back();
        return res;
    }
};