class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
//         sort(intervals.begin(),intervals.end());
//         for(int i=1; i<intervals.size(); i++)
//         {
//             if(intervals[i][0]<=intervals[i-1][1])
//             {
//                 vector<int> add(2);
//                 add[0]=min(intervals[i-1][0],intervals[i][0]);
//                 add[1]=max(intervals[i-1][1],intervals[i][1]);
//                 intervals.erase(intervals.begin()+i-1,intervals.begin()+i+1);
//                 auto it = intervals.insert(intervals.begin()+i-1,add);
//                 i--;
//             }
                
//         }
        
//         return intervals;
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        for(auto i:intervals)
        {
            if(ans.empty() || ans.back()[1]<i[0])
            {
                ans.push_back(i);
            }
            else
            {
                ans.back()[1]=max(ans.back()[1],i[1]);
            }
        }
        return ans;
        
    }
};