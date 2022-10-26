class Solution {
public:
    /*
    // Swapping and Insertion Sort
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return;
        for(int i=0;i<m;i++) {
            if(nums1[i]>nums2[0]) swap(nums1[i],nums2[0]);
            int first=nums2[0];
            int k=1;
            for(k=1;k<n && nums2[k]<first;k++) nums2[k-1]=nums2[k];
            nums2[k-1]=first;
        }
        for(int i=0;i<n;i++) nums1[i+m]=nums2[i];
    }
    */
    
    // Gap Method
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return;
        for(int i=0;i<n;i++) nums1[m+i]=nums2[i];
        int gap=ceil((float)(m+n)/2);
        while(gap>0) {
            int i=0,j=gap;
            while(j<m+n) {
                if(nums1[i]>nums1[j]) swap(nums1[i],nums1[j]);
                i++;
                j++;
            }
            if(gap==1) break;
            gap=ceil((float)gap/2);
        }
    }
};