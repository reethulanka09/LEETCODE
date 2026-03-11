class Solution {
public:
    int bitwiseComplement(int n) {
        string s = "";
        if(n==0) return 1;
        while(n>0){
            s = char(n % 2 + '0') + s;
            n= n>>1;
        }
        int ans=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='0'){
                ans += pow(2,s.size() - i - 1 );
            }
        }
        return ans;
    }
};