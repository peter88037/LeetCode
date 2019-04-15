class Solution {
public:
    int lengthOfLastWord(string s) {
        int flag=s.size()-1;
        int ans=0;
        while(s[flag]==' ')
        {
            flag--;
        }
        for(;flag>=0;flag--)
        {
            if(s[flag]!=' ')
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};