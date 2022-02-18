class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int temp=digits[n-1]+1;
        int carry=temp/10;
        digits[n-1]=temp%10;
        for(int i=n-2;i>=0;i--) {
            if(carry==0)
                break;
            temp=digits[i]+carry;
            carry=temp/10;
            digits[i]=temp%10;
        }
        if(carry!=0)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};