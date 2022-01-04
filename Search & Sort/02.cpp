class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int l=0, r=nums.size()-1;
        while(l<=r)
        {
            int mid=(r-l)/2 +l;
            int comparator=nums[mid];
            if(((target>=nums[0]) && (nums[mid]>=nums[0]))||((target<nums[0]) && (nums[mid]<nums[0])))
            {
                comparator=nums[mid];
            }
            
            else
            {
                if(nums[0]>target)
                {
                    comparator=INT_MIN;
                }
                else
                {
                    comparator=INT_MAX;
                }
            }
            
            if(target==comparator)
            {
                return mid;
            }
            else if(target>comparator)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        
        return -1;
        
    }
};