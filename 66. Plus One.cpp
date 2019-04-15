class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans=digits;
        for(int i=ans.size()-1;i>=0;i--)
        {
            if(ans[i]==9)
            {
                ans[i]=0;
                if(i==0)
                {
                    ans.insert(ans.begin(), 1); 
                }
            }
            else
            {
                ans[i]++;
                break;
            }
        }
        return ans;
    }
};