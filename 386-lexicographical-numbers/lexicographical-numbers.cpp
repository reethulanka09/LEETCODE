class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string>res;
        for(int i=1;i<=n;i++){
            res.push_back(to_string(i));
        }
        sort(res.begin(),res.end());
        vector<int>ans;
        for(int i=0;i<res.size();i++){
            ans.push_back(stoi(res[i]));
        }
        return ans;
    }
};