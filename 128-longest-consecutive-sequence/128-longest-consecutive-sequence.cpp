#include<bits/stdc++.h>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        unordered_map<int,bool> m;
        for(int num:nums) {
            m[num]=false;
        }
        int max_seq=INT_MIN, cur_seq=0;
        for(int num:nums) {
            if(m[num]) continue;
            cur_seq=1;
            int current_num=num;
            m[num]=true;
            while(m.find(current_num-1)!=m.end()) {
                m[current_num-1]=true;
                cur_seq++;
                current_num--;
            }
            max_seq=max(max_seq, cur_seq);
        }
        return max_seq;
    }
};