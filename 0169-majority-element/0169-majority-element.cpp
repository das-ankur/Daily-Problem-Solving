class Solution {
public:
    /*
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
        int major, freq=INT_MIN;
        int t=nums.size()/2;
        for(auto x:m)  {
            if(x.second>=t && x.second>freq) {
                freq=x.second;
                major=x.first;
            }
        }
        return major;
        */
        /*
        // Optimized Approach
        int ans,count=0;
        for(int i=0;i<nums.size();i++) {
            if(count==0) {
                ans=nums[i];
                count=1;
                continue;
            }
            if(ans!=nums[i])
                count--;
            else
                count++;
        }
        return ans;
    }
    */
    /*
    // Practice 1
    int majorityElement(vector<int>& nums) {
        int count=0;
        int ans=0;
        for(int i=0;i<nums.size();i++) {
            if(count==0) {
                ans=nums[i];
                count++;
            }
            else {
                if(ans==nums[i]) count++;
                else count--;
            }
        }
        return ans;
    }
    */
    /*
    int majorityElement(vector<int>& nums) {
        int count=0, num;
        for(int i=0;i<nums.size();i++) {
            if(count==0) {
                num=nums[i];
                count++;
            }
            else {
                if(num==nums[i]) count++;
                else count--;
            }
        }
        return num;
    }
    */
    /*
    // Hashing
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int x: nums) m[x]++;
        for(auto x: m) {
            if(x.second>nums.size()/2) return x.first;
        }
        return -1;
    }
    */
    int majorityElement(vector<int>& nums) {
        int count=0, num;
        for(int x: nums) {
            if(count==0) {
                count++;
                num=x;
            }
            else {
                if(num==x) count++;
                else count--;
            }
        }
        return num;
    }
}; 