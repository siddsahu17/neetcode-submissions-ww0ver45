class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int res = r;
        while(l<=r){
            int mid = l + (r-l)/2;
            long long temp = 0;
            for(int i = 0; i<piles.size(); i++){
                temp += ceil(static_cast<double>(piles[i]) / mid);
            }
            
            if(temp <= h){
                res = min(res,mid);
                r = mid - 1;
            }

            else if(temp > h){
                l = mid + 1;
            }
        }

        return res;
    }
};
