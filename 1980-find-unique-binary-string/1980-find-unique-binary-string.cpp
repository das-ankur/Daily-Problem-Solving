class Solution {
public:
    void helper(int i, int n, string &num, unordered_set<string> &s, string &res) {
        if(i>=n) {
            if(s.find(num)==s.end()) res=num;
            return;
        }
        // Insert 0
        if(res.size()==0) {
            num[i]='0';
            helper(i+1,n,num,s,res);
        }
        if(res.size()==0) {
            num[i]='1';
            helper(i+1,n,num,s,res);
        }
    }
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<string> s;
        for(string n: nums) s.insert(n);
        string num(nums[0].size(),' ');
        string res;
        helper(0,nums[0].size(),num,s,res);
        return res;
    }
};