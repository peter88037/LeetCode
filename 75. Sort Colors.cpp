class Solution {
public:
    void sortColors(vector<int>& nums) {
        int front=0,rear=nums.size()-1,tmp=0,flag=0;
        if(nums.size()>=2)
        {
            while(flag<=rear)
            {
                if(nums[flag]==0)
                {
                    tmp=nums[flag];
                    nums[flag]=nums[front];
                    nums[front]=tmp;
                    front++;
                    flag++;
                }
                else if(nums[flag]==1)
                {
                    flag++;
                }
                else if(nums[flag]==2)
                {
                    tmp=nums[flag];
                    nums[flag]=nums[rear];
                    nums[rear]=tmp;
                    rear--;
                }
            }
        }
    }
};