class Solution {
public:
    /*
    // Brute Force
    int reversePairs(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++) {
            for(int j=i+1;j<nums.size();j++) {
                if(nums[i]>2*nums[j]) res++;
            }
        }
        return res;
    }
    */
    int merge(vector<int> &arr, int left, int mid, int right) {
        int j=mid+1,count=0;
        for(int i=left;i<=mid;i++) {
            while(j<=right && (long long int)arr[i]>(long long int)2*(long long int)arr[j]) j++;
            count+=(j-(mid+1));
        }
        vector<int> temp;
        int i=left;
        j=mid+1;
        while(i<=mid && j<=right) {
            if(arr[i]<=arr[j]) temp.push_back(arr[i++]);
            else temp.push_back(arr[j++]);
        }
        while(i<=mid) temp.push_back(arr[i++]);
        while(j<=right) temp.push_back(arr[j++]);
        for(i=left;i<=right;i++) arr[i]=temp[i-left];
        return count;
    }
    int merge_sort(vector<int> &arr, int left, int right) {
        if(left>=right) return 0;
        int mid=(left+right)/2;
        int count = merge_sort(arr,left,mid);
        count += merge_sort(arr,mid+1,right);
        count += merge(arr,left,mid,right);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        int res=merge_sort(nums,0,n-1);
        return res;
    }
};