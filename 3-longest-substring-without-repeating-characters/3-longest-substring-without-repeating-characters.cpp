class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==1)
            return 1;
        int max_length=0;
        unordered_map<char, int> m;
        int temp=0;
        for(int i=0;i<s.size();i++) {
            auto it=m.find(s[i]);
            if(it==m.end()) {
                m[s[i]]=i;
                temp++;
            }
            else {
                if(temp>=max_length)
                    max_length=temp;
                i=it->second;
                m.clear();
                temp=0;
            }
        }
        if(temp>max_length)
            max_length=temp;
        return max_length;
    }
};