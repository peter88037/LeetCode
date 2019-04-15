class Solution {
public:
    string countAndSay(int n) {
        int count=0;
        if(n==1)
        {
            string ans = "1";
            return ans;
        }
        if(n==2)
        {
            string ans = "11";
            return ans;
        }
        string ans = "11",tmp="";
        //ans=ans+"x";
        for(int i=3;i<n+1;i++)
        {
            count=0;
            tmp="";
            for(int j=0;j<ans.size();j++)
            {
                count++;
                if(!(ans[j]==ans[j+1] && j+1<ans.size()))
                {
                    tmp=tmp+to_string(count);
                    tmp=tmp+ans[j];
                    count=0;
                }
            }
            ans=tmp;
        }
        return ans;
    }
};