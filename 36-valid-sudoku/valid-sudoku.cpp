class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            map<int,int>mpp;
            for(int j=0;j<9;j++){
                if(board[i][j] == '.') continue;
                if(mpp.find(board[i][j])!=mpp.end()){
                    return false;
                }
                mpp[board[i][j]]=1;
            }
        }
        for(int i=0;i<9;i++){
            map<int,int>mpp;
            for(int j=0;j<9;j++){
                if(board[j][i] == '.') continue;
                if(mpp.find(board[j][i])!=mpp.end()){
                    return false;
                }
                mpp[board[j][i]]=1;
            }
        }
        for(int blockRow=0; blockRow<9; blockRow+=3){
        for(int blockCol=0; blockCol<9; blockCol+=3){
            map<char,int> mpp;
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    char val = board[blockRow+i][blockCol+j];
                    if(val == '.') continue;
                    if(mpp.find(val) != mpp.end()) return false;
                    mpp[val] = 1;
                }
            }
        }
    }
        return true;
    }
};