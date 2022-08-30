#include<bits/stdc++.h>
class Solution {
public:
    bool isSubsetSum(vector<int> &arr, int sum){
        int n=arr.size();
        vector<bool> prev(sum+1,false);
        for(int target=0;target<=sum;target++) prev[target]=(target==arr[0]);
        prev[0] = true;
        for(int idx=1;idx<n;idx++) {
            vector<bool> cur(sum+1,false);
            cur[0]=true;
            for(int target=1;target<=sum;target++) {
                bool notTake=prev[target];
                bool take=false;
                if(target>=arr[idx]) take=prev[target-arr[idx]];
                cur[target]=notTake||take;
            }
            prev=cur;
        }
        return prev[sum];
    }
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2!=0) return false;
        else return isSubsetSum(nums,sum/2);
    }
};