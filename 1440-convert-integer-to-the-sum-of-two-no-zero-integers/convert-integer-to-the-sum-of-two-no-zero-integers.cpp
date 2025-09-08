class Solution {
public:
    bool iszero(string n){
        for(auto ch : n) if(ch=='0') return false;
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        int a=1,b=0;
        while(true){
            b=n-a;
            if(iszero(to_string(b)) and iszero(to_string(a))){
                break;
            }
            a++;
        }
        return {a,b};
    }
};