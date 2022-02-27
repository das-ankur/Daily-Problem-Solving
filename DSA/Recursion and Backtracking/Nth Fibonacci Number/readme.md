<p>
  <h1>Nth Fibonacci Number</h1>
  <div>Given a positive integer n, find the nth fibonacci number. Since the answer can be very large, return the answer modulo 1000000007.</div>
  <div>
  <div>
    <strong>Example 1:</strong><br>
    Input: n = 2<br>
    Output: 1<br>
    Explanation: 1 is the 2nd number of fibonacci series.
  </div>
  <div>
    <strong>Example 2:</strong><br>
    Input: n = 5<br>
    Output: 5<br>
    Explanation: 5 is the 5th number of fibonacci series.
  </div>
  <div>
    <strong>Your Task:</strong>  
    You dont need to read input or print anything. Complete the function nthFibonacci() which takes n as input parameter and returns nth fibonacci number.
  </div>
  <div>
    <strong>Expected Time Complexity:</strong> O(n)
    <strong>Expected Auxiliary Space:</strong> O(n)
  </div>
</p>
<p>
  <h2>Solution:</h2>
  <pre>
  class Solution {
  public:
    /*
    //  Using Recursion
    long long int nthFibonacci(long long int n){
        // code here
        if(n<=1)
            return n;
        return nthFibonacci(n-1)+nthFibonacci(n-2);
    }
    */
    //Using Dynamic Programming
    long long int nthFibonacci(long long int n) {
        long long int fib[n+1];
        fib[0]=0;
        fib[1]=1;
        fib[2]=1;
        for(int i=3;i<=n;i++)
            fib[i]=(fib[i-1]%1000000007+fib[i-2]%1000000007)%1000000007;
        return fib[n];
    }
  };
  </pre>
</p>
