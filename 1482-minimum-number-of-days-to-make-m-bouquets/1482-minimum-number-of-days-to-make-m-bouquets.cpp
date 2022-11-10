class Solution {
public:
    int countAdjacentFlowers(vector<int> &bloomDay, int k, int day) {
        int n=bloomDay.size();
        int adj=0, count=0;
        for(int i=0;i<n;i++) {
            if(bloomDay[i]<=day) adj++;
            else {
                count+=(adj/k);
                adj=0;
            }
        }
        count+=(adj/k);
        return count;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int min_day=INT_MAX;
        int low=1, high=*max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high) {
            int mid=(low+high)/2;
            int cur_count=countAdjacentFlowers(bloomDay,k,mid);
            //cout<<mid<<" "<<cur_count<<endl;
            if(cur_count>=m) {
                min_day=min(min_day,mid);
                high=mid-1;
            }
            else low=mid+1;
        }
        return min_day==INT_MAX?-1:min_day;
    }
};