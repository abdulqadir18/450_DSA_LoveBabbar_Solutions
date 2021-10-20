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

string reverseWord(string s){
    
  //Your code here
    
    string temp =s;
    int n=s.size();
    for(int i=0; i<n; i++)
    {
      s[i]=temp[n-i-1];
    }
    
    return s;
}