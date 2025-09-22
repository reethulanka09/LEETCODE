class Solution {
public:
    bool checkString(string s) {
        int b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b') {
                b=i; 
                break;
            }
        }
        if(b==0 and s[0]!='b'){
            return true;
        }
        for(int i=b;i<s.size();i++){
            if(s[i]=='a') return false;
        }
        return true;
    }
};