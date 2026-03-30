class Solution {
public:
    int Factorial(int n){
        if(n==0 || n==1){
            return 1;
        }

        return n * Factorial(n-1);
    }

    int Combination(int n, int r){
        return Factorial(n) / (Factorial(r)*Factorial(n-r));
    }

    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        vector<int> res;

        for(int i = 0; i<rowIndex+1; i++){
            vector<int> row(i+1, 1);

            for(int j = 1; j<i; j++){
                row[j] = ans[i-1][j-1] + ans[i-1][j];
            }

            ans.push_back(row);
            res = row;
        }

        return res;
    }
};