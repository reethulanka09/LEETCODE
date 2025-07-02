class Solution {
public:
    int maxPower(string s) {
        int m=1;
        int i=0,j=0;
        while(j<s.size()){
            if(s[i]!=s[j]){
                m=max(m,j-i);
                i=j;
            }
            j++;
        }
        m=max(m,j-i);
        return m;
    }
};