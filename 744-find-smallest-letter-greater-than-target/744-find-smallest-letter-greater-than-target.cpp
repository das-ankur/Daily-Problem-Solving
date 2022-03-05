class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low=0, high=letters.size()-1;
        while(high-low>1) {
            int mid=(low+high)/2;
            if(letters[mid]<=target)
                low=mid+1;
            else
                high=mid;
        }
        if(letters[low]>target)
            return letters[low];
        else if(letters[high]>target)
            return letters[high];
        else
            return letters[0];
    }
};