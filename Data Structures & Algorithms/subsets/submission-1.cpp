class Solution {
public:
    void solve(vector<int>& input, vector<int>& output, vector<vector<int>>& ans, int index){
        if(index == input.size()){
            ans.push_back(output);
            return;
        }
        solve(input, output, ans, index + 1);

        output.push_back(input[index]);
        solve(input, output, ans, index + 1);
        output.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        solve(nums, output, ans, 0);
        return ans;
    }
};
