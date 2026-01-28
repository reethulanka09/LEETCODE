class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int m = matrix.size();
        for(int i = 0; i<m; i++){
            vector<int> temp(matrix.size()+1 , 0);
            int count = 0;
            for(int j = 0; j<m; j++){
                temp[matrix[i][j]]++;
                if(temp[matrix[i][j]] == 1)
                count++;
            }
            if(count != matrix.size())
            return false;
        }
        for(int j = 0; j<m; j++){
            vector<int> temp(matrix.size()+1 , 0);
            int count = 0;
            for(int i = 0; i<m; i++){
                temp[matrix[i][j]]++;
                if(temp[matrix[i][j]] == 1)
                count++;
            }
            if(count != matrix.size())
            return false;
        }
        return true;
    }
};