#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
vector <int> a(n);
for(int i=0; i<n; i++)
{
  cin>>a[i];
}

sort(a.begin(), a.end());

cout<<a[0]<<" "<<a[n-1];

return 0;
}