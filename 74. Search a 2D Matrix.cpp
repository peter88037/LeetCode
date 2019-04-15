class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size() || !matrix[0].size()) return false;
        int front=0,rear=matrix.size()*matrix[0].size()-1,mid=0,m,n;       
        while(front<=rear)
        {
            mid=(front+rear)/2;
            m=mid/matrix[0].size();
            n=mid%matrix[0].size();
            if(matrix[m][n]==target)
            {
                return true;
            }
            else if(matrix[m][n]<target)
            {
                front=mid+1;
            }
            else
            {
                rear=mid-1;
            }
        }
        return false;
    }
};