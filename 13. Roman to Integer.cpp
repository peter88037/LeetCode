class Solution {
public:
    int romanToInt(string s) {
        long long int ans=0,x1=0,x2=0;
        for(int i=0;i<s.size();i++)
        {
            switch(s[i])
            {
                case 'I':
                    x1=1;
                    break;
                case 'V':
                    x1=5;
                    break;
                case 'X':
                    x1=10;
                    break;
                case 'L':
                    x1=50;
                    break;
                case 'C':
                    x1=100;
                    break;
                case 'D':
                    x1=500;
                    break;
                case 'M':
                    x1=1000;
                    break;
            }   
                    
            switch(s[i+1])
            {
                case 'I':
                    x2=1;
                    break;
                case 'V':
                    x2=5;
                    break;
                case 'X':
                    x2=10;
                    break;
                case 'L':
                    x2=50;
                    break;
                case 'C':
                    x2=100;
                    break;
                case 'D':
                    x2=500;
                    break;
                case 'M':
                    x2=1000;
                    break;
            }
            if(x2>x1 && i!=s.size()-1)
            {
                ans=ans+x2-x1;
                //cout<<ans<<"*"<<endl;
                i++;
            }
            else
            {
                ans=ans+x1;
                //cout<<ans<<endl;
            }
        }
        return ans;
    }
};