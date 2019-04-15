class Solution {
public:
    bool isPalindrome(int x) {
        string s;
        stringstream ss(s);
        ss << x;
        for(int flag=0;flag<ss.str().size()/2;flag++)
        {
            if(ss.str()[flag]!=ss.str()[ss.str().size()-flag-1]){
                return 0;
            }

        }
        return 1;
    }
};