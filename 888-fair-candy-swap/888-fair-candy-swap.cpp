#include <bits/stdc++.h>
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        unordered_map<int, int> m;
        int dif=0;
        for(auto x:aliceSizes) {
            dif+=x;
        }
        for(auto x:bobSizes) {
            dif-=x;
            m[x]++;
        }
        for(int i : aliceSizes){
            if(m.find((2*i-dif)/2) != m.end())
                return vector<int>({i,(2*i - dif)/2});
        }
        return vector<int>({-1,-1});
    }
};