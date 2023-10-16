class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> cur;
        generateSubsets(nums, 0, cur, result);
        return result;
    }
    
private:
    void generateSubsets(const vector<int>& nums, int i, vector<int>& cur, vector<vector<int>>& result) {
        if (i == nums.size()) {
            result.push_back(cur);
            return;
        }
        generateSubsets(nums, i + 1, cur, result);
        cur.push_back(nums[i]);
        generateSubsets(nums, i + 1, cur, result);
        cur.pop_back(); 
    }
};
