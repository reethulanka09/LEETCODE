class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int>res;
        for(int d=0;d<m+n-1;d++){
            vector<int>vec;
            int r=0;
            if(d<n){
                r=0;
            }
            else{
                r=d-n+1;
            }
            int c=0;
            if(d<n){
                c=d;
            }
            else{
                c=n-1;
            }
            while(r<m && c>=0){
                vec.push_back(mat[r][c]);
                r++;
                c--;
            }
            if(d%2==0){
                reverse(vec.begin(),vec.end());
            }
            for(auto i:vec){
                res.push_back(i);
            }
        }
        return res;
    }
};