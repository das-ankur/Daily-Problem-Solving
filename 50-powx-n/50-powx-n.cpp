#include<bits/stdc++.h>
class Solution {
public:
    double helper(double x, int n) {
        if(n==0)
            return 1;
        double partial=helper(x, n/2);
        if(n%2==0)
            return partial*partial;
        else
            return partial*partial*x;
    }
    double myPow(double x, int n) {
        if(n==0)
            return 1;
        else if(n<0) {
            double partial=helper(x, abs(n));
            return 1.0/partial;
        }
        else
            return helper(x,n);
    }
};