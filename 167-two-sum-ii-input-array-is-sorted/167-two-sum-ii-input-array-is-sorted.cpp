class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0, right=numbers.size()-1;
        vector<int> res(2);
        while(left<right) {
            int temp=numbers[left]+numbers[right];
            if(temp==target) {
                res[0]=left+1;
                res[1]=right+1;
                break;
            }
            else if(temp>target) {
                right--;
            }
            else {
                left++;
            }
        }
        return res;
    }
};