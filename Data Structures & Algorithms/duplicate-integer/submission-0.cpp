class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> um;
        for(auto x:nums)
        {
            um[x]++;

            if(um[x]>1)
            {
                return true;
            }
        }
        return false;
    }
};