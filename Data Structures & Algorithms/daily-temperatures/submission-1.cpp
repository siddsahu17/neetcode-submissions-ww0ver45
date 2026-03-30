class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> res(temp.size());
        stack<pair<int,int>> s;

        int n = temp.size();
        for(int i = n-1; i>=0; i--){
            int curr = temp[i];

            while(!s.empty() && curr >= s.top().first){
                s.pop();
            }

            if(!s.empty()){
                res[i] = s.top().second-i;
            }

            s.push({curr , i});
        }

        return res;
    }
};
