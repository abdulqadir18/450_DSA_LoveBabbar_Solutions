#include <iostream>
using namespace std;

//Dnf algo
void rearrange(int a[], int n)
{
  int lo=0, mid=0, hi=n-1;
  while(mid<=hi)
  {
    if(a[mid]>=0)
    {
      swap(a[mid],a[hi--]);
    }
    else
    {
      swap(a[lo++], a[mid++]);
    }
  }
}

void printArray(int a[], int n)
{
  for(int i=0; i<n; i++)
  {
    cout<<a[i]<<" ";
  }
}

int main()
{
  int a[]={-1, 2, -3, 4, 5, 6, -7, 8, 9 };
  int n=sizeof(a)/sizeof(a[0]);
  rearrange(a,n);
  printArray(a,n);

  return 0;
}