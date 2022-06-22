#include<bits/stdc++.h>
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> h;
        for(int n:nums) {
            h.push(n);
        }
        int ans;
        for(int i=0;i<k;i++) {
            ans=h.top();
            h.pop();
        }
        return ans;
    }
};