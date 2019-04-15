class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> ans(grid.size(),vector<int>(grid[0].size()));
        ans[0][0]=grid[0][0];
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(i==0 && j==0)
                {
                    continue;
                }
                if(i==0 && j!=0)
                {
                    ans[0][j]=ans[0][j-1]+grid[0][j];
                }
                else if(i!=0 && j==0)
                {
                    ans[i][0]=ans[i-1][0]+grid[i][0];
                }
                else
                {
                    ans[i][j]=grid[i][j]+min(ans[i-1][j],ans[i][j-1]);
                }
            }
        }
        return ans[grid.size()-1][grid[0].size()-1];
    }
};