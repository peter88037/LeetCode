class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        if(nums.size()==0)
        {
            return 0;
        }
        for(int flag=1;flag<nums.size();flag++)
        {
            if(nums[count-1]!=nums[flag])
            {
                nums[count]=nums[flag];
                count++;
            }

        }
        return count;
    }
};

