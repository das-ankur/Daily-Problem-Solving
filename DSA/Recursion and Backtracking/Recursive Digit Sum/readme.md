<pre>
We define super digit of an integer x using the following rules:

Given an integer, we need to find the super digit of the integer.

If x has only 1 digit, then its super digit is x.
Otherwise, the super digit of x is equal to the super digit of the sum of the digits of x.
For example, the super digit of 9875 will be calculated as:

	super_digit(9875)   	9+8+7+5 = 29 
	super_digit(29) 	2 + 9 = 11
	super_digit(11)		1 + 1 = 2
	super_digit(2)		= 2 
<br><a href="https://www.hackerrank.com/challenges/recursive-digit-sum/problem">Problem Link</a>
</pre>
<pre>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long sum=0;
int super_digit(long long k) {
    if(k==0)
        return sum;
    sum += k % 10;
    return super_digit(k/10);
}
long long sum_initial(string number){
    long long sum_init = 0;
    for( int i = 0; i < number.size(); i++ ) {
        sum_init += number[i] - '0';
    }
    return sum_init;
}
int main() {
    string  n;
    int k;
    cin >> n >> k;
    long long repeated = sum_initial(n) * k;
    long long result = super_digit(repeated);
    while(result>10) {
        sum=0;
        result=super_digit(result);
    }
    cout << result << "\n";
    return 0;
}
</pre>
