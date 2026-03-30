class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans = s[0];
        for(int i = 1; i<s.size(); i++){
            int j = 0;
            while(j < min(ans.length() , s[i].length())){
                if(ans[j] != s[i][j]){
                    break;
                }
                j++;
            }
            ans = ans.substr(0,j);
        }
        return ans;
    }
};