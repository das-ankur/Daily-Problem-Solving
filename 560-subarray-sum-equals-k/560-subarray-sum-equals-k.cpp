class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        /*
        Subarray can start from any index.
        It can also end at any index.
        But start<=end when sum of subarry equals with k
        */
        // Sum is calculated from left to right and stored in Hash Map
        // Hash Map is used to reduce the time complexcity for searching
        unordered_map<int, int> m;
        // Initialize counter
        int count=0, currentSum=0;
        int n=nums.size();
        if(n==0)
            return count;
        for(int i=0;i<n;i++) {
            // currentSum - k presents in the map
            // or currentSum == k then increment count
            currentSum+=nums[i];
            // When currentSum equals with k
            if(currentSum==k)
                count++;
            // When currentSum - k is found in the previous sum
            if(m.find(currentSum-k)!=m.end())
                count+=m[currentSum-k];
            m[currentSum]+=1;
        }
        return count;
    }
};