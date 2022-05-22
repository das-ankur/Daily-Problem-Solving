// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++
string helper(string &str, int left, int right) {
    if(left>=right)
        return str;
    char ch=str[left];
    str[left]=str[right];
    str[right]=ch;
    return helper(str, left+1, right-1);
}
string reverseWord(string str){
  //Your code here
  return helper(str, 0, str.size()-1);
}