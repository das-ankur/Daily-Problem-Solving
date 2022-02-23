class Solution {
public:
    /*
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int>m1;
        unordered_map<int, int>m2;
        for(int i=0;i<nums1.size();i++)
            m1[nums1[i]]++;
        for(int i=0;i<nums2.size();i++)
            m2[nums2[i]]++;
        for(auto it1=m1.begin();it1!=m1.end();it1++) {
            auto it2=m2.find(it1->first);
            if(it2!=m2.end()) {
                for(int i=0;i<min(it1->second, it2->second);i++)
                    res.push_back(it1->first);
            }
        }
        return res;
    }*/
    bool binarySearch(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1, mid;
        while(low<=high) {
            mid=(high+low)/2;
            if(nums[mid]==target) {
                nums.erase(nums.begin()+mid);
                return true;
            }
            else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        return false;
    }
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        if(nums1.size()<nums2.size()) {
            sort(nums2.begin(), nums2.end());
            for(int i=0;i<nums1.size();i++) {
                if(binarySearch(nums2, nums1[i]))
                    res.push_back(nums1[i]);
            }
        }
        else {
            sort(nums1.begin(), nums1.end());
            for(int i=0;i<nums2.size();i++) {
                if(binarySearch(nums1, nums2[i]))
                    res.push_back(nums2[i]);
            }
        }
        return res;
    }
};