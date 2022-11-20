class Solution {
public:
    /*
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++) {
            if(nums[i]>nums[(i+1)%n]) count++;
        }
        return count<=1;
    }
    */
    /*
    // Brute Force
    bool isTwoArrayEqual(vector<int> &arr1, vector<int> &arr2) {    // O(n)
        for(int i=0;i<arr1.size();i++) {
            if(arr1[i]!=arr2[i]) return false;
        }
        return true;
    }
    void rotate(vector<int> &nums, int n) {                         //O(n)
        int t=nums[n-1];
        for(int i=n-1;i>0;i--) nums[i]=nums[i-1];
        nums[0]=t;
    }
    bool check(vector<int> &nums) {             
        int n=nums.size();
        vector<int> temp(nums);
        sort(temp.begin(),temp.end());
        for(int i=0;i<n;i++) {                                      //O(n)
            rotate(nums, n);
            if(isTwoArrayEqual(temp,nums)) return true;
        }
        return false;
    }
    //Total Complexcity: O(n^2)
    */
    // Optimal Approach
    bool check(vector<int> &nums) {
        int count=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]>nums[(i+1)%nums.size()]) count++;
        }
        return count<=1;
    }
};