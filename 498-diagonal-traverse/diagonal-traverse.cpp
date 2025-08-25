class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int r=0,c=0;
        vector<int>ans;
        bool upwards=true;
        while(r<m && c<n){
            if(upwards){
                while(r>0 and c<n-1){
                    ans.push_back(mat[r][c]);
                    r--;
                    c++;
                }
                ans.push_back(mat[r][c]);
                if(c==n-1){
                    r++;
                }
                else{
                    c++;
                }
            }
            else{
                while(c>0 and r<m-1){
                    ans.push_back(mat[r][c]);
                    c--;
                    r++;
                }
                ans.push_back(mat[r][c]);
                if(r==m-1){
                    c++;
                }
                else{
                    r++;
                }
            }
            upwards=!upwards;
        }
        return ans;
    }
};