class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<9;i++)
        {
            for(int j=1;j<10;j++)
            {
                if(isRepeat1(i,j,board))
                {
                    return false;
                }
            }
        }
        
        for(int i=0;i<9;i++)
        {
            for(int j=1;j<10;j++)
            {
                if(isRepeat2(j,i,board))
                {
                    return false;
                }
            }
        }
        
        for(int i=0;i<9;i+=3)
        {
            for(int i2=0;i2<9;i2+=3)
            {
                for(int j=1;j<10;j++)
                {
                    if(isRepeat3(i,i2,j,board))
                    {
                        return false;
                    }
                }
            }
        }
        
        

        return true;
    }
    
    
    bool isRepeat1(int x,int num,vector<vector<char>>& bo)
    {
        int flag=0;
        for(int y=0;y<9;y++)
        {
            if(bo[x][y]-'0'==num)
            {
                flag++;
                if(flag>=2)
                {
                    return true;
                }
            }
        }
        return false;
    }
    
    bool isRepeat2(int num,int y,vector<vector<char>>& bo)
    {
        int flag=0;
        for(int x=0;x<9;x++)
        {
            if(bo[x][y]-'0'==num)
            {
                flag++;
                if(flag>=2)
                {
                    return true;
                }
            }
        }
        return false;
    }
    
    bool isRepeat3(int x,int x2,int num,vector<vector<char>>& bo)
    {
        int flag=0;
        for(int y=0;y<3;y++)
        {
            for(int y2=0;y2<3;y2++)
            {
                if(bo[x+y][x2+y2]-'0'==num)
                {
                    flag++;
                    if(flag>=2)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};