class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> tri(numRows);
        if(numRows==0)
        {
            return tri;
        }
        if(numRows==1)
        {
            tri[0].push_back(1);
            return tri;
        }
        tri[0].push_back(1);tri[1].push_back(1);tri[1].push_back(1);
        for(int i=2;i<numRows;i++)
        {
            for(int j=0;j<i+1;j++)
            {
                if(j==0 || j==i)
                {
                    tri[i].push_back(1);
                }
                else
                {
                    tri[i].push_back(tri[i-1][j-1]+tri[i-1][j]);
                }
            }
        }
        return tri;
    }
};