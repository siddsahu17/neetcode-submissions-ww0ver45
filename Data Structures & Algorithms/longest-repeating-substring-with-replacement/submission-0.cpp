class Solution {
public:
    int characterReplacement(string s, int k) {
        int res = 0;
        for(int i = 0; i<s.length(); i++){
            unordered_map<char,int> m;
            int maxCount = 0;
            for(int j = i; j<s.length(); j++){
                m[s[j]]++;
                maxCount = max(maxCount, m[s[j]]);

                if((j - i + 1) - maxCount <= k){
                    res = max(res, j-i+1);
                }
            }
        }

        return res;
    }
};
