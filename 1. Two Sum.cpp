class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> box;
        vector<int> ans;
        
        for(int i=1;i<nums.size();i++)
        {
            if(box[target-nums[i]]>0)
            {
                ans.push_back(box[target-nums[i]]);
                ans.push_back(i);
                break;
            }
            else if(target-nums[i]==nums[0])
            {
                ans.push_back(box[target-nums[i]]);
                ans.push_back(i);
                break; 
            }
            else
            {
                box[nums[i]]=i;
            }
        }
        
        return ans;
    }
};