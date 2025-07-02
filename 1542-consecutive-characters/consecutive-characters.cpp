class Solution {
public:
    int maxPower(string s) {
        int m=1;
        int i=0,j=0;
        if(s.size()==2 and s[0]==s[1]) return 2;
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