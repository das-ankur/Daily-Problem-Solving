class Solution {
public:
    /*
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> res(2);
        for(int i=0;i<nums.size();i++) {
            int d=target-nums[i];
            if(m.find(d)!=m.end()) {
                res[0]=m[d];
                res[1]=i;
                break;
            }
            m[nums[i]]=i;
        }
        return res;
    }
    */
    /*
    // Practice 1
     vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int,int> m;
         vector<int> ans(2);
         for(int i=0;i<nums.size();i++) {
             int temp=target-nums[i];
             if(m.find(temp)!=m.end()) {
                 ans[0]=m[temp];
                 ans[1]=i;
                 break;
             }
             else m[nums[i]]=i;
         }
         return ans;
     }
     */
    /*
    // Practice 2
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2);
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++) {
            int req=target-nums[i];
            if(m.find(req)!=m.end()) {
                res[0]=m[req];
                res[1]=i;
                break;
            }
            else {
                m[nums[i]]=i;
            }
        }
        return res;
    }
    */
    /*
    // Naive Approach
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                if(nums[i]+nums[j]==target) return {i,j};
            }
        }
        return {-1,-1};
    }
    */
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++) {
            int x=target-nums[i];
            if(m.find(x)!=m.end()) return {m[x],i};
            m[nums[i]]=i;
        }
        return {-1,-1};
    }
}; 