class Solution {
public:
    int numSteps(string s) {
        int c=0;
        int carry=0;
        for(int i=s.size()-1;i>0;i--){
            if(((s[i]-'0')+carry)%2==0){
                c++;
            }
            else{
                carry=1;
                c+=2;
            }
        }
        return c+carry;
    }
};