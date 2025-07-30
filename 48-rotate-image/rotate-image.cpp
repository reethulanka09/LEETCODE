class Solution {
public:
    void transpose(vector<vector<int>>& matrix){
    int n = matrix.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void reverseRows(vector<vector<int>>& matrix){
    for(int i = 0; i < matrix.size(); i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

void rotate(vector<vector<int>>& matrix) {
    transpose(matrix);  
    reverseRows(matrix);
}
};