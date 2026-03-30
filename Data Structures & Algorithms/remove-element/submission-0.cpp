class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i<n; i++){
            if(nums[i] != val){
                ans.push_back(nums[i]);
                count++;
            }
        }
        nums.clear();

        for(int i = 0; i<ans.size(); i++){
            nums[i] = ans[i];
        }
        

        return count;
    }
};