class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,char> smap;
        unordered_map<char,char> tmap;
        for(int i=0;i<s.size();i++) {
            smap[s[i]]=t[i];
            tmap[t[i]]=s[i];
        }
        for(int i=0;i<s.size();i++) {
            if(smap[s[i]]!=t[i] || tmap[t[i]]!=s[i]) return false;
        }
        return true;
    }
};