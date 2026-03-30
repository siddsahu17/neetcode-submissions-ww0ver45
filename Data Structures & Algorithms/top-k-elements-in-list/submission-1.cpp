class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i = 0; i<nums.size(); i++){
            m[nums[i]]++;
        }

        vector<pair<int,int>> ans;

        for(auto it : m){
            ans.push_back({it.second, it.first});
        }

        sort(ans.rbegin(), ans.rend());

        vector<int> res;
        int i = 0;
        while(k--){
            res.push_back(ans[i++].second);
        }

        return res;
    }
};
