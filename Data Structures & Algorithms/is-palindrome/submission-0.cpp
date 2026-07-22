class Solution {
public:

    bool isalpnum(char c)
    {
        return (c>='0' && c<='9') ||
        (c>='a' && c<='z');
    }

    bool isPalindrome(string s) {
        int i=0,j=s.length() -1 ;

        for(auto &x:s)
        {
            x=tolower(x);
        }

        while(i<j)
        {
            while(i<j && !isalpnum(s[i]))
            {
                i++;
            }

            while (i<j && !isalpnum(s[j]))
            {
                j--;
            }

            if(s[i]!=s[j])
            {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};
