class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
        }
        priority_queue<pair<int,int>> q;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            q.push(make_pair(it->second, it->first));
        }
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};