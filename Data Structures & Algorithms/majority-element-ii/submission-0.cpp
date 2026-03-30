class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int> m;
        vector<int> ans;

        for(auto x : nums){
            m[x]++;
        }

        for(auto x : m){
            if(x.second > n/3){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};