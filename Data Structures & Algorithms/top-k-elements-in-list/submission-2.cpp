class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        priority_queue<pair<int,int>> pq;
        for(auto x: nums)
        {
            um[x]++;
        }

        for(auto x: um)
        {
            pq.push({x.second,x.first});
        }

        vector<int> res;

        for(int i=0;i<k;i++)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;
    }
};
