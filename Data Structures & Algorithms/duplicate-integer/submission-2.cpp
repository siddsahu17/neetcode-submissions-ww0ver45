class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        bool flag = false;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == nums[i+1]){
                flag = true;
                break;
            }
        }
        return flag;
    }
};