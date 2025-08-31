class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string res;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                res+=words[i][j];
            }
            if(res==s) return true;
        }
        return false;
    }
};