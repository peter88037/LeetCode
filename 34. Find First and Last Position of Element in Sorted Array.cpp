class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int left=0,right=nums.size()-1,mid=0;
        vector<int> ans(2);
        while(left<=right)
        {
            mid=(left+right)/2;
            if(nums[mid]>target)
            {
                right=mid-1;
            }
            else if(nums[mid]<target)
            {
                left=mid+1;
            }
            
            else if(nums[mid]==target)
            {
                
                left=mid;
                right=mid;
                
                while(left!=0 && nums[left-1]==target)
                {
                    left--;
                }
                
                while(right!=nums.size()-1 && nums[right+1]==target)
                {
                    right++;
                }
                ans[0]=left;
                ans[1]=right;
                return ans;
            }
        
        }
        ans[0]=-1;
        ans[1]=-1;
        return ans;
    }
};