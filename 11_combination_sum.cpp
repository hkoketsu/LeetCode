class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        sort(candidates.begin(), candidates.end());
        vector<int> combination;
        search(result, candidates, target, combination, 0);
        return result;
    }
    
    void search(vector<vector<int>>& result, vector<int>& candidates, int target, vector<int>& combination, int start) {
        if (target == 0) {
            result.push_back(combination);
            return;
        }
        
        for (int i = start; i < candidates.size() && target >= candidates[i]; i++) {
            combination.push_back(candidates[i]);
            search(result, candidates, target - candidates[i], combination, i);
            combination.pop_back();
        }
    }
};