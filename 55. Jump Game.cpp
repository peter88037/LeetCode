class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max=0;
        for(int i=0;i<nums.size();i++)
        {
            if(max>=nums.size()-1)
            {
                return true;
            }
            if(i>max)
            {
                return false;
            }
            if(nums[i]+i>max)
            {
                max=nums[i]+i;
            }
            
        }
        if(max>=nums.size()-1)
        {
            return true;
        }
        else
        {
            return false;
        }       
    }
};