class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int num=0,prev=INT_MIN;
        for(int i=s.size()-1;i>=0;i--) {
            //cout<<num<<" ";
            if(m[s[i]]<prev) num-=m[s[i]];
            else num+=m[s[i]];
            prev=m[s[i]];
        }
        //cout<<num;
        //cout<<endl;
        return num;
    }
};