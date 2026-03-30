class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        vector<int> PF(n, 0);
        PF[0] = nums[0];
        
        for(int i =1; i<n; i++){
            PF[i] = PF[i-1] + nums[i];
            
        }

        unordered_map<int , int> m; // <PS , freq>
        for(int j = 0; j<n; j++){
            if(PF[j] == k) count++;

            int val = PF[j] - k;
            if(m.find(val) != m.end()){
                count += m[val];
            }

            if(m.find(PF[j]) == m.end()){
                m[PF[j]] = 0;
            }
            m[PF[j]]++;
        }

        return count;
    }
};