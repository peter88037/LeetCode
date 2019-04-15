class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int flag=0;flag<nums.size();flag++)
        {
            if(nums[flag]==target)
            {
                return flag;
            }
            else if(nums[flag]>=target)
            {
                return flag;
            }
        }

        return nums.size();
    }
};