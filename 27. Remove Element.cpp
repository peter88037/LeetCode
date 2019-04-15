class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int front=0,rear=nums.size()-1;
        while(front<=rear)
        {
            if(nums[front]==val)
            {
                nums[front]=nums[rear];
                rear--;
            }
            else
            {
                front++;
            }
        }
        return front;
    }
};