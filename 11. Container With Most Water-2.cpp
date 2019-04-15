class Solution {
public:
    int maxArea(vector<int>& height) {
        int tmp=0,ans=0,begin=0,end=height.size()-1;
        while(begin<end)
        {
            if(height[begin]<=height[end])
            {
                tmp=height[begin]*(end-begin);
                begin++;
            }
            else
            {
                tmp=height[end]*(end-begin);
                end--;
            }
            
            if(tmp>ans)
            {
                ans=tmp;
            }
        }
        return ans;
    }
};