#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int countSquares(int N) {
        // code here
        int n=floor(sqrt(N));
        double rem=sqrt(N)-n;
        // cout<<rem;
        if(rem==0)
        {
            return n-1;
        }
        else
        {
            return n;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}  // } Driver Code Ends