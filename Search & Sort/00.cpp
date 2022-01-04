#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends


vector<int> find(int arr[], int n , int x )
{
    // code here
    int fo = -1;        //fo = first occurence
   int so = -1;        // so = second occurence
   
   int start=0;
   int end = n-1;
   
   while(start<=end)
   {
       int mid = (start+end)/2;
       if(arr[mid] == x)
       {
           fo = mid;
           so = mid;
           
         while(arr[so] == x && so < n)
              so++;
          
            so -=1;
           
           
            while(arr[fo] == x && fo>=0)
                fo--;
            
            fo +=1;
           
           break;
       }
       else if(arr[mid] > x)
       end = mid-1;
       else 
       start = mid + 1;
   }
   vector<int> v;
   v.push_back(fo);
   v.push_back(so);
   
   return v;
}