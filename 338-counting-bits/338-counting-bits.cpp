class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for(int i=0;i<=n;i++) {
            int one_count=0;
            int num=i;
            while(num>0) {
                one_count += num%2;
                num /= 2;
            }
            ans[i] = one_count;
        }
        return ans;
    }
};