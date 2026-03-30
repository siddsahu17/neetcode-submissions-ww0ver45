class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int,int> m;
        int n = arr.size();
        int first, second;
        for(int i = 0; i<n; i++){
            first = arr[i];
            second = target-first;
            if(m.find(second) != m.end()){
                return {m[second], i};
            }

            m[first] = i;
        }
    }
};
