class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // To store the merged intervals
        vector<vector<int>> result;
        // Sort the intervals according to the starting time
        sort(intervals.begin(), intervals.end());
        // Insert the first interval
        result.push_back(intervals[0]);
        for(int i=1, j=0;i<intervals.size();i++) {
            // If any operlapping interval is found then
            // Change the interval's end time which is already in the result
            if(intervals[i][0]<=result[j][1]) {
                result[j][1]=max(result[j][1], intervals[i][1]);
            }
            // For non-overlapping intervals push it into the result
            else {
                j++;
                result.push_back(intervals[i]);
            }
        }
        // Return the result
        return result;
    }
};