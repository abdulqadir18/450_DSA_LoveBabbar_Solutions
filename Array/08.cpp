// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int a[], int n, int k) {
        // code here
         
       sort(a,a+n);
       int ans=a[n-1]-a[0];
       int smallest=a[0]+k;
       int largest=a[n-1]-k;
       int mn,mx;
       
       for(int i=0; i<n-1; i++)
       {
           mn=min(smallest,a[i+1]-k);
           mx=max(largest,a[i]+k);
           
           if(mn>=0)
           {
               ans=min(ans,mx-mn);
           }
       }
       
       return ans;
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends