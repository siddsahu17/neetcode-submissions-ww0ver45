class Solution {
public:
    bool searchInRow(vector<vector<int>>& matrix, int target, int row){
        int n = matrix[0].size();
        int st = 0, end = n-1;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(matrix[row][mid] == target){
                return true;
            }else if(matrix[row][mid] < target){
                st = mid + 1;
            }else{
                end = mid-1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int sr = 0, er = m-1;
        // int sc = 0, ec = n-1;
        while(sr<=er){
            int midr = sr + (er-sr)/2;
            if(matrix[midr][0] <= target && matrix[midr][n-1] >= target){
                return searchInRow(matrix,target,midr);
            }else if(matrix[midr][n-1] <= target){
                sr = midr+1;
            }if(matrix[midr][0] >= target){
                er = midr-1;
            }
        }
        return false;
    }
};