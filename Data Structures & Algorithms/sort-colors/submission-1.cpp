class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin() , nums.end());
        int n = nums.size();
        int r=0,b=0,w=0;

        for(int i = 0; i<n; i++){
            if(nums[i] == 0) r++; // 1
            if(nums[i] == 1) w++; // 2 
            if(nums[i] == 2) b++; // 1
        }

        for(int i = 0; i<r; i++){
            nums[i] = 0;
        }
        for(int i = r; i<r+w; i++){
            nums[i] = 1;
        }
        for(int i = r+w; i<r+w+b; i++){
            nums[i] = 2;
        }
    }
};