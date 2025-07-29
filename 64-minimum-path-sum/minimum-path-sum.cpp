class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>matrix(grid.size(),vector<int>(grid[0].size(),0));
        matrix[0][0]=grid[0][0];
        for(int j=1;j<matrix[0].size();j++){
            matrix[0][j]=matrix[0][j-1]+grid[0][j];
        }
        for(int j=1;j<matrix.size();j++){
            matrix[j][0]=matrix[j-1][0]+grid[j][0];
        }
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[i].size();j++){
                    matrix[i][j]=min(matrix[i-1][j],matrix[i][j-1])+grid[i][j];
            }
        }
        return matrix[matrix.size()-1][matrix[0].size()-1];
    }
};