class Solution {
public:
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
    }
};