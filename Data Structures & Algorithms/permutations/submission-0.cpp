class Solution {
public:
    vector<vector<int>> res;

    void solve(vector<int> &nums, int l, int r){
        if(l == r){
            res.push_back(nums);
            return;
        }else{
            for(int i = l; i<=r; i++){
                swap(nums[l], nums[i]);
                solve(nums, l+1, r);
                swap(nums[l], nums[i]);
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;

        solve(nums, l ,r);

        return res;
    }
};
