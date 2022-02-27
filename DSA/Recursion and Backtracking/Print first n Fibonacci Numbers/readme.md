<p>
  <h1>Print first n Fibonacci Numbers</h1>
  <div>Given a number N, find the first N Fibonacci numbers. The first two number of the series are 1 and 1.</div>
  <div>
  <div>
    <strong>Example 1:</strong><br>
    Input: N = 5<br>
    Output: 1 1 2 3 5<br>
  </div>
  <div>
    <strong>Example 2:</strong><br>
    Input: N = 7<br>
    Output: 1 1 2 3 5 8 13<br>
  </div>
  <div>
    <strong>Your Task:</strong>  
    Your task is to complete printFibb() which takes single argument N and returns a list of first N Fibonacci numbers.
  </div>
  <div>
    <strong>Expected Time Complexity:</strong> O(N)
    <strong>Expected Auxiliary Space:</strong> O(N)
  </div>
</p>
<p>
  <h2>Solution:</h2>
  <pre>
  class Solution
  {
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> res;
    void fib(long long a, long long b, int n) {
        if(n==0) {
            return;
        }
        res.push_back(a);
        fib(b, a+b, n-1);
    }
    vector<long long> printFibb(int n) 
    {
        //code here
        fib(1, 1, n);
        return res;
    }
  };
  </pre>
</p>
