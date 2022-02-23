class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int , int> m1;
        unordered_map<int , int> m2;
        for(int i=0;i<nums1.size();i++)
            m1[nums1[i]]=1;
        for(int i=0;i<nums2.size();i++)
            m2[nums2[i]]=1;
        vector<int> res;
        for(auto it=m1.begin();it!=m1.end();it++) {
            if(m2.find(it->first)!=m2.end())
                res.push_back(it->first);
        }
        return res;
    }
};