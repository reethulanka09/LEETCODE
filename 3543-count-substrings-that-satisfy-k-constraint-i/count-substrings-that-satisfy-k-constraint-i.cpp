class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            int oc=0,zc=0;
            for(int j=i;j<s.size();j++){
                if(s[j]=='1'){
                    oc++;
                }
                else{
                    zc++;
                }
                if(oc<=k or zc<=k){
                    ans++;
                }
            }
        }
        return ans;
    }
};