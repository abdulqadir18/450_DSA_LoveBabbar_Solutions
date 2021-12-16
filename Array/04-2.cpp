#include <iostream>
using namespace std;

//2 pointer method
void shiftall(int a[], int n)
{
  int left=0, right=n-1;

  while(left<=right)
  {
    if(a[left]<0 && a[right]<0)
    {
      left++;
    }
    else if(a[left]>0 && a[right]>0)
    {
      right--;
    }
    else if(a[left]>0 && a[right]<0)
    {
      swap(a[left],a[right]);
      left++;
      right--;
    }
    else
    {
      left++;
      right--;
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
  int a[]={ -1, 2, -3, 4, 5, 6, -7, 8, 9 };
  int n=sizeof(a)/sizeof(a[0]);
  shiftall(a,n);
  printArray(a,n);

  return 0;
}