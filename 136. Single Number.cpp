class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        
        int a=nums[0],b=nums[1],c=a^b;
        for(int i=2;i<nums.size();i++){
            c=c^nums[i];
        }        
        return c;
    }
};