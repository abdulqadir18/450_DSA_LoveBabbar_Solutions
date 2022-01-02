class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int flag=0;
        if(a.size()==1)
        {
            flag=1;
        }
        
        else
        {
            int i=a.size()-2;
            while(i!=-1)
            {
                int mn=101;
                int m;
                for(int j=i+1; j<a.size(); j++)
                {
                    if(a[j]>a[i] && a[j]<mn)
                    {
                        mn=a[j];
                        m=j;
                    }
                }
                
                if(mn==101)
                {
                    i--;
                }
                else
                {
                    swap(a[i],a[m]);
                    sort(a.begin()+i+1,a.end());
                    flag=1;
                    break;
                }
            }
        }
        
        if(flag==0)
        {
            sort(a.begin(),a.end());
        }
        
        
    }
};