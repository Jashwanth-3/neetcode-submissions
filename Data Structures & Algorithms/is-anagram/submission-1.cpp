class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length()!=t.length())
        {
            return false;
        }
        unordered_map<char,int>um;
        for(auto x:s)
        {
            um[x]++;
        }

        for(auto y:t)
        {
            um[y]--;
        }

        for(auto x: um)
        {
            if(x.second >0)
            {
                return false;
            }
        }

        return true;
    }
};
