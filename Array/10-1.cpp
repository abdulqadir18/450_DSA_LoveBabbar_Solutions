class Solution {
public:
    int findDuplicate(vector<int>& a) {
        
        map<int,int>m;
        for(int i=0; i<a.size(); i++)
        {
            if(m[a[i]])
            {
                return a[i];
            }
            else
            {
                m[a[i]]=1;
            }
        }
        return -1;
    }
};