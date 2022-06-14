class Solution {
public:
    /*
    void helper(vector<char> &s, int i, int j) {
        if(i>=j)
            return;
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        helper(s,i+1,j-1);
    }*/
    void reverseString(vector<char>& s) {
        /*
        //Recursion
        helper(s, 0, s.size()-1);
        */
        //Two-Pointer Approach
        for(int i=0, j=s.size()-1;i<=j;i++,j--) {
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
};