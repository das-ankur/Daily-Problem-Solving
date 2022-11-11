class Solution {
public:
    int calculateDays(vector<int> &weight, int capacity) {
        int cur_capacity=0, count=0;
        for(int i=0;i<weight.size();i++) {
            if(cur_capacity+weight[i]>capacity) {
                count++;
                cur_capacity=0;
            }
            cur_capacity += weight[i];
        }
        return cur_capacity>0?count+1:count;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int high=accumulate(weights.begin(), weights.end(), 0), low=*max_element(weights.begin(),weights.end());
        int capacity=INT_MAX;
        while(low<=high) {
            int mid=(low+high)/2;
            int cur_days=calculateDays(weights,mid);
            //cout<<low<<" "<<high<<" "<<mid<<" "<<cur_days<<endl;
            if(cur_days<=days) {
                capacity=min(capacity,mid);
                high=mid-1;
            }
            else low=mid+1;
        }
        return capacity;
    }
};