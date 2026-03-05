class Solution {
public:
    int minOperations(string s) {
        string s1="";
        string s2="";
        int c1=0;
        int c2=0;
        int c=s.size();
        int cs=s.size();

        while(c>0){
            s1=s1+"10";
            c=c-2;
        }
        while(cs>0){
            s2=s2+"01";
            cs=cs-2;
        }
        for(int i=0;i<s.size();i++){
            if(s1[i]!=s[i]){
                c1++;
            }
        }
        for(int i=0;i<s.size();i++){
            if(s2[i]!=s[i]){
                c2++;
            }
        }
        if(c1<c2){
            return c1;
        }
        else{
            return c2;
        }
    }
};