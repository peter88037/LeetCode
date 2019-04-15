class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int flag=0,bomb=0;
        if(strs.empty())
        {
            return "";
        }
        for(int i=0;i<strs[0].size();i++)
        {
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j][i] != strs[0][i])
                {
                    bomb=1;
                    break;
                }
            }
            if(bomb==1)
            {
                break;
            }
            flag++;

        }
        return strs[0].substr(0, flag);
    }
};