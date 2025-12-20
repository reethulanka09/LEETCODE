class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ans = 0;
        string s;
        for (int i = 0; i < strs[0].size(); i++) {   
        for (int j = 0; j < strs.size(); j++) { 
            if (i < strs[j].size()) {
                s += strs[j][i];
            }
        }
            string s1 = s;
            sort(s.begin(),s.end());
            if(s1!=s) ans++;
            s="";
        }
        return ans;
    }
};