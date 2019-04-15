class Solution {
public:
    int reverse(int x) {
        stringstream ss;
        ss << x;
        string str = ss.str();

        stringstream ss2;
        ss2 << x;
        string str2 = ss2.str();

        int flag=0;
        
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='-')
            {
                str2[0]='-';
                flag++;
                continue;
            }
            if(flag==1)
            {
                str2[i]=str[str.size()-i]; 
            }
            else
            {
                str2[i]=str[str.size()-i-1]; 
            }
           
        }
        

        
        stringstream ssF;

        string numberStr = str2;
        int num;
        //cout<<str2;
        ssF << numberStr; 
        ssF >> num;
        
        if(num>=2147483647 || num<=-2147483648)
        {
            return 0;
        }
        
        //return std::stoi( str2 );
        return num;
    }
};