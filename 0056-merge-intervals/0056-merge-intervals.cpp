class Solution {
public:
    /*
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<=1) return intervals;
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        for(auto i: intervals) {
            vector<int> cur=res[res.size()-1];
            if(i[0]>=cur[0] && i[1]<=cur[1]) continue;
            else if(i[0]<=cur[0] && i[1]>=cur[0] && i[1]<=cur[1]) res[res.size()-1][0]=i[0];
            else if(i[0]>=cur[0] && i[0]<=cur[1] && i[1]>=cur[1]) res[res.size()-1][1]=i[1];
            else res.push_back(i);
        }
        return res;
    }
    */
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        for(auto x:intervals) {
            vector<int> curr=res[res.size()-1];
            if(x[0]>=curr[0] && x[1]<=curr[1]) continue;
            else if(x[0]<=curr[0] && x[1]>=curr[0] && x[1]<=curr[1]) res[res.size()-1][0]=x[0];
            else if(x[0]>=curr[0] && x[0]<=curr[1] && x[1]>=curr[1]) res[res.size()-1][1]=x[1];
            else res.push_back(x);
        }
        return res;
    }
};