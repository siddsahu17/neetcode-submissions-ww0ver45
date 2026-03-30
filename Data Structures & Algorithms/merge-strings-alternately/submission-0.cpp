class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int pt1 = 0, pt2 = 0;
        
        // int i = 0;
        int n = word1.size(), m = word2.size();

        while(pt1 < n && pt2 < m){
            ans += word1[pt1];
            pt1++;
            ans += word2[pt2];
            pt2++;
        }

        while(pt1 < n){
            ans += word1[pt1];
            pt1++;
        }

        while(pt2 < m){
            ans += word2[pt2];
            pt2++;
        }

        return ans;
    }
};