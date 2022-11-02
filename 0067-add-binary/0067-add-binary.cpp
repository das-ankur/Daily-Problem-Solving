class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1, j=b.size()-1, carry=0, sum;
        string res;
        while(i>=0 && j>=0) {
            sum=(a[i]-'0')+(b[j]-'0')+carry;
            if(sum==0) {
                sum=0;
                carry=0;
            }
            else if(sum==1) {
                sum=1;
                carry=0;
            }
            else if(sum==2) {
                sum=0;
                carry=1;
            }
            else {
                sum=1;
                carry=1;
            }
            res.push_back('0'+sum);
            i--;
            j--;
        }
        while(i>=0) {
            sum=(a[i]-'0')+carry;
            if(sum==0) {
                sum=0;
                carry=0;
            }
            else if(sum==1) {
                sum=1;
                carry=0;
            }
            else if(sum==2) {
                sum=0;
                carry=1;
            }
            else {
                sum=1;
                carry=1;
            }
            res.push_back('0'+sum);
            i--;
        }
        while(j>=0) {
            sum=(b[j]-'0')+carry;
            if(sum==0) {
                sum=0;
                carry=0;
            }
            else if(sum==1) {
                sum=1;
                carry=0;
            }
            else if(sum==2) {
                sum=0;
                carry=1;
            }
            else {
                sum=1;
                carry=1;
            }
            res.push_back('0'+sum);
            j--;
        }
        if(carry==1) res.push_back('0'+carry);
        reverse(res.begin(),res.end());
        return res;
    }
};