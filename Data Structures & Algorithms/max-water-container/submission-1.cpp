class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int h, w;
        int total = INT_MIN, curr = 0;

        int l=0, r=n-1;
        while(l<r){
            w = r-l;
            h = min(height[l],height[r]);
            if(h == height[l]) l++;
            else r--;

            curr = w*h;
            total = max(total, curr);
        }

        return total;
    }
};
