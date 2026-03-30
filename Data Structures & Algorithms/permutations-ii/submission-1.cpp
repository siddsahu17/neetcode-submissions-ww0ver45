class Solution {
public:
    vector<vector<int>> res;

    void solve(vector<int> &nums, int l, int r){
        if(l == r){
            res.push_back(nums);
            return;
        }
        unordered_set<int> s;
        for(int i = l; i<=r; i++){
            if(s.count(nums[i])) continue;
            s.insert(nums[i]);
            swap(nums[l], nums[i]);
            solve(nums, l+1, r);
            swap(nums[l], nums[i]);
        }
        
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        sort(nums.begin(), nums.end());
        solve(nums, l ,r);

        return res;
    }
};