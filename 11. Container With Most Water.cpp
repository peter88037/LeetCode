class Solution {
public:
    int maxArea(vector<int>& height) {
        cout<<height[2];
        int tmp=0,ans=0;
        for(int i=0;i<height.size()-1;i++)
        {
            for(int j=1+i;j<height.size();j++)
            {
                if(height[i]<=height[j])
                {
                    tmp=height[i]*(j-i);
                }
                else
                {
                    tmp=height[j]*(j-i);
                }
                if(tmp>ans)
                {
                    ans=tmp;
                }
            }
        }
        return ans;
    }
};