class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<vector<int>> mark = matrix;

        for(int r = 0; r<row; r++){
            for(int c = 0; c<col; c++){
                if(matrix[r][c] == 0){
                    for(int i = 0; i<col; i++){
                        mark[r][i] = 0;
                    }
                    for(int i = 0; i<row; i++){
                        mark[i][c] = 0;
                    }
                }
            }
        }

        for(int r = 0; r<row; r++){
            for(int c = 0; c<col; c++){
                matrix[r][c] = mark[r][c];
            }
        }
    }
};
