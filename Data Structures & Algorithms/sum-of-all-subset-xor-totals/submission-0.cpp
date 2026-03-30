class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int res = 0;
        for(auto num: nums){
            res |= num;
        }

        return res << (nums.size() - 1);
    }
};