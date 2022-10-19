class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> table(n,1);
        vector<int> count(n,1);
        int max_seq=1;
        for(int i=1;i<n;i++) {
            for(int prev=0;prev<i;prev++) {
                if(nums[i]>nums[prev] && table[i]<table[prev]+1) {
                    table[i]=table[prev]+1;
                    count[i]=count[prev];
                }
                else if(nums[i]>nums[prev] && table[i]==table[prev]+1) count[i]+=count[prev];
            }
            max_seq=max(max_seq, table[i]);
        }
        int freq=0;
        for(int i=0;i<n;i++) {
            if(table[i]==max_seq) freq+=count[i];
        }
        return freq;
    }
};