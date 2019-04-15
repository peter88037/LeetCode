class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        //ans.push_back('f');
        //ans.push_back('u');
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        //cout<<a.size();
        int aPoint=0,bPoint=0,c=0,answ=0;
        
        while(aPoint<a.size() || bPoint<b.size() || c==1)
        {
            if(c==1)
            {
                answ=answ+c;
                c=0;
            }
            if(aPoint<a.size())
            {
                answ=answ+(a[aPoint]-'0');
                aPoint++;
                if(answ==2)
                {
                    answ=0;
                    c=1;
                }
            }
            if(bPoint<b.size())
            {
                answ=answ+(b[bPoint]-'0');
                bPoint++;
                if(answ==2)
                {
                    answ=0;
                    c=1;
                }
            }
            stringstream ss;
            ss<<answ;
            string convert_str;
            ss >>  convert_str; 
            ans.push_back(convert_str[0]);
            answ=0;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};