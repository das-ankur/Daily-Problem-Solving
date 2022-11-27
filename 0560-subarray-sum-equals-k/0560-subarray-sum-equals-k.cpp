class Solution {
public:
    /*
    // Brute Force
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++) {
            int temp=0;
            for(int j=i;j<nums.size();j++) {
                temp+=nums[j];
                if(temp==k) count++;
            }
        }
        return count;
    }
    */
    /*
    // Optimized Approach
    int subarraySum(vector<int> &nums, int k) {
        unordered_map<int, int> freq;
        int prefix_sum=0, count=0;
        freq[prefix_sum]=1;
        for(int i=0;i<nums.size();i++) {
            prefix_sum += nums[i];
            count+=freq[prefix_sum-k];
            freq[prefix_sum]++;
        }
        return count;
    }
    */
    // Naice Appraoach
    /*
    int subarraySum(vector<int> &nums, int k) {
        int count=0, n=nums.size();
        for(int i=0;i<n;i++) {
            int sum=0;
            for(int j=i;j<n;j++) {
                sum += nums[j];
                if(sum==k) count++;
            }
        }
        return count;
    }
    */
    int subarraySum(vector<int> &nums, int k) {
        int n=nums.size();
        unordered_map<int,int> sum_freq;
        int prefix_sum=0, count=0;
        sum_freq[prefix_sum]=1;
        for(int i=0;i<n;i++) {
            prefix_sum+=nums[i];
            count+=sum_freq[prefix_sum-k];
            sum_freq[prefix_sum]++;
        }
        return count;
    }
    
};