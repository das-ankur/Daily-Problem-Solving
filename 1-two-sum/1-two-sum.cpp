class Solution {
public:
    /*
    // Brute Force
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2);
        int n=nums.size();
        bool flag=false;
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                if(nums[i]+nums[j] == target) {
                    flag=true;
                    res[0]=i;
                    res[1]=j;
                    break;
                }
            }
            if(flag)
                break;
        }
        return res;
    }
    */
    /*
    // Two-pass Hash Table
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res={-1, -1};
        unordered_map<int, int> map;
        int n=nums.size();
        for(int i=0;i<n;i++)
            map[nums[i]]=i;
        for(int i=0;i<n;i++) {
            int comp=target-nums[i];
            if(map.count(comp) && map[comp]!=i)  {
                res[0]=map[comp];
                res[1]=i;
            }
        }
        return res;
    }
    */
    // One-pass Hash Table
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2);
        unordered_map<int, int> map;
        int n=nums.size();
        for(int i=0;i<n;i++) {
            int comp=target-nums[i];
            if(map.find(comp)!=map.end())  {
                res[0]=map[comp];
                res[1]=i;
            }
            map[nums[i]]=i;
        }
        return res;
    }
};