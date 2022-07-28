#include<bits/stdc++.h>
class Solution {
public:
    /*
    bool compare(vector<int> &history, string &s) {
        vector<int> char_count(26,0);
        for(int i=0;i<s.size();i++) {
            if(char_count[s[i]-'a']==1) return false;
            char_count[s[i]-'a']=1;
        }
        for(int i=0;i<s.size();i++) 
            if(history[s[i]-'a']==1) return false;
        return true;
        
    }
    int helper(vector<string> &arr, int pos, vector<int> &selected, int len) {
        if(pos>=arr.size()) return len;
        if(!compare(selected,arr[pos]))
            return helper(arr,pos+1,selected,len);
        else {
            //pick
            string s=arr[pos];
            for(int i=0;i<s.size();i++) selected[s[i]-'a']=1;
            len+=s.size();
            int op1=helper(arr,pos+1,selected,len);
            //skip: backtracking
            for(int i=0;i<s.size();i++) selected[s[i]-'a']=0;
            len-=s.size();
            int op2=helper(arr,pos+1,selected,len);
            return max(op1,op2);
        }
    }
     int maxLength(vector<string>& arr) {
        vector<int> selected(26,0);
         return helper(arr,0,selected,0);
    }*/
    bool compare(vector<int> &history, string s) {
        vector<int> selfCheck(26,0);
        for(char ch:s) {
            if(selfCheck[ch-'a']==1) return false;
            selfCheck[ch-'a']=1;
        }   
        for(char ch:s) if(history[ch-'a']==1) return false;
    return true;
    }
    int helper(vector<string> &arr, int i, vector<int> &selected, int len) {
        if(i>=arr.size()) return len;
        string s=arr[i];
        if(!compare(selected,s)) return helper(arr,i+1,selected,len);
        else {
            // Pick
            for(char ch:s) selected[ch-'a']=1;
            len+=s.size();
            int pick=helper(arr,i+1,selected,len);
            for(char ch:s) selected[ch-'a']=0;
            len-=s.size();
            int not_pick=helper(arr,i+1,selected,len);
            return max(pick,not_pick);
        }
    }
    int maxLength(vector<string> &arr) {
        int len=0;
        vector<int> selected(26,0);
        return helper(arr,0,selected,0);
    }
};