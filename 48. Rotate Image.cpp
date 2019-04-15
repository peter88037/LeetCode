class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size()/2;i++)
        {
            for(int j=i;j<matrix.size()-1-i;j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[matrix.size()-j-1][i];
                matrix[matrix.size()-j-1][i]=matrix[matrix.size()-i-1][matrix.size()-j-1];
                matrix[matrix.size()-i-1][matrix.size()-j-1]=matrix[j][matrix.size()-i-1];
                matrix[j][matrix.size()-i-1]=temp;
            }
        }
    }
};