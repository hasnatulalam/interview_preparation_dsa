// C++ program for the above approach
#include <iostream>
using namespace std;

string removeChar(string &s,int idx,int n)
{
	// Base Case
	if (idx==n) return "";
	string curr="";
	curr+=s[idx];
	return ((s[idx]=='a')? "" : curr) +removeChar(s,idx+1,n);


}

// Driver Code
int main()
{
	// Given String
	string s = "abcax";
	int n =5;



	// Function Call
	s = removeChar(s,0,5);
	cout << s;
	return 0;
}

