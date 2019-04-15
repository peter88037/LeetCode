class Solution {
public:
    int climbStairs(int n) {
        int nums[10000]={0};

        nums[0]=0;
        nums[1]=1;
        nums[2]=2;

            for(int i=3;i<n+1;i++)
            {
                nums[i]=nums[i-1]+nums[i-2];
            }
        return nums[n];
    }
};