class Solution {
public:
    /*
    bool helper(string &s, int left, int right) {
        if(left>=right)
            return true;
        if(s[left]!=s[right])
            return false;
        return helper(s,left+1,right-1);
    }
    bool isPalindrome(string s) {
        string res;
        for(char ch:s) {
            if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
                res.push_back(ch);
            if(ch>='A' && ch<='Z')
                res.push_back(ch+32);
        }
        return helper(res,0,res.size()-1);
    }
    */
    /*
    // Practice !
    bool helper(string &s, int left, int right) {
        if(left>=right)
            return true;
        if(s[left]!=s[right])
            return false;
        return helper(s,left+1,right-1);
        
    }
    bool isPalindrome(string s) {
        string res;
        for(char ch:s) {
            if(ch==' ')
                continue;
            else if(ch>='A' && ch<='Z')
                res.push_back(ch+32);
            else if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
                res.push_back(ch);
        }
        return helper(res,0,res.size()-1);
    }
    */
    /*
    // Practice 2
    bool helper(string &s, int left, int right) {
        if(left>=right) return true;
        else  {
            if(s[left]!=s[right]) return false;
            else return helper(s,left+1,right-1);
        }
    }
    bool isPalindrome(string s) {
        string res;
        for(char ch:s) {
            if(ch>='A' && ch<='Z') res.push_back(ch+32);
            else if(ch>='a' && ch<='z') res.push_back(ch);
        }
        return helper(res,0,res.size()-1);
    }
    */
    // Practice 3
    bool helper(string &s, int left, int right) {
        if(left>=right)
            return true;
        if(s[left]!=s[right])
            return false;
        return helper(s,left+1,right-1);
        
    }
    bool isPalindrome(string s) {
        string res;
        for(char ch:s) {
            if(ch==' ')
                continue;
            else if(ch>='A' && ch<='Z')
                res.push_back(ch+32);
            else if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
                res.push_back(ch);
        }
        return helper(res,0,res.size()-1);
    }
};