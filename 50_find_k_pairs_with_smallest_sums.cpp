class Solution {
private:
    struct mycompare{
        bool operator()(pair<int, int>& p1, pair<int, int>& p2){
            return p1.first + p1.second > p2.first + p2.second;
        }
    };
    
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> res;
        priority_queue<pair<int,int>, vector<pair<int, int> >, mycompare> pq;
        
        int size1 = nums1.size(), size2 = nums2.size();
        
        for(int i = 0; i < size1; i++){
            for(int j = 0; j < size2; j++){
                pq.push(make_pair(nums1[i], nums2[j]));
            }
        }
        
        while(k-- && !pq.empty()) {
            res.push_back(vector<int>{pq.top().first, pq.top().second});
            pq.pop();
        }
        return res;
    }
};