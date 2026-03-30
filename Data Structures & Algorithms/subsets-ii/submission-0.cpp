class Solution {
public:
    void solve(vector<int>& input, vector<int>& output, vector<vector<int>>& ans, int index, set<vector<int>>& seen){
        if (index == input.size()) {
            // Before adding, check if the sorted output already exists
            if (seen.find(output) == seen.end()) {
                ans.push_back(output);
                seen.insert(output);
            }
            return;
        }
        
        // Exclude the current element
        solve(input, output, ans, index + 1, seen);
        
        // Include the current element
        output.push_back(input[index]);
        solve(input, output, ans, index + 1, seen);
        output.pop_back();
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        set<vector<int>> seen;
        sort(nums.begin(), nums.end()); // sort to handle duplicates
        solve(nums, output, ans, 0, seen);
        return ans;
    }
};