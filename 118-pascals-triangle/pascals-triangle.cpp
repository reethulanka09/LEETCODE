class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>vec;
        vector<int>c(1,1);
        vec.push_back({1});
        while(numRows>1){
            vector<int>res=c;
            for(int i=1;i<c.size();i++){
                res[i]=c[i]+c[i-1];
            }
            res.push_back(1);
            vec.push_back(res);
            c=res;
            numRows--;
        }
        return vec;
    }
};