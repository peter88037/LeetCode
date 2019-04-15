class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> ans(m,vector<int>(n));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 || j==0)
                {
                    ans[i][j]=1;
                }
                else
                {
                    ans[i][j]=ans[i-1][j]+ans[i][j-1];    
                }                
            }
        }
        //cout<<ans[0][0];
        return ans[m-1][n-1];
    }
};