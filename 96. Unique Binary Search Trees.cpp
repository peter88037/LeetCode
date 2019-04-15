class Solution {
public:
    int numTrees(int n) {
        int x[n+1]={0};
        if(n==0)
        {
            return 1;
        }
        if(n==1)
        {
            return 1;
        }
        if(n==2)
        {
            return 2;
        }
        x[0]=1;
        x[1]=1;
        x[2]=2;
        
        for(int i=3;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
                x[i]=x[i]+x[j]*x[i-1-j];
            }

        }
        
        return x[n];
    }
};