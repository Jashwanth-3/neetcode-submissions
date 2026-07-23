class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        vector<int> res;
        vector<vector<int>> buck(nums.size()+1);
        for(int x : nums)
        {
            um[x]++;
        }

        for(auto u : um)
        {
            buck[u.second].push_back(u.first);
        }

        for(int i= buck.size()-1;i >=0;i--)
        {
            for(int x : buck[i])
            {
                res.push_back(x);
            }

            if(res.size()==k) break;
        }


        return res;
    }
};
