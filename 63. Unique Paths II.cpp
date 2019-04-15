class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int ans[obstacleGrid.size()][obstacleGrid[0].size()]={0};
        if(obstacleGrid.size()==1 && obstacleGrid[0].size()==1)
        {
            if(obstacleGrid[0][0]==1)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        
        for(int m=0;m<obstacleGrid.size();m++)
        {
            for(int n=0;n<obstacleGrid[0].size();n++)
            {
                if(obstacleGrid[m][n]==1)
                {
                    ans[m][n]=0;
                    continue;
                }
                else if(m==0 || n==0)
                {
                    if(m==0 && n==0)
                    {
                        ans[m][n]=1;
                        continue;
                    }
                    else if(m==0 && ans[m][n-1]==0 || n==0 && ans[m-1][n]==0)
                    {
                        ans[m][n]=0;
                    }
                    else
                    {
                        ans[m][n]=1;                        
                    }
                }
                else
                {
                    ans[m][n]=ans[m-1][n]+ans[m][n-1];
                    
                }
            }
        }
        
        return ans[obstacleGrid.size()-1][obstacleGrid[0].size()-1];
    }
};