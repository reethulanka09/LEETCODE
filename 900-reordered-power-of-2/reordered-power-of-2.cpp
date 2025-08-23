class Solution {
public:
    string countdigit(int n){
        string a=to_string(n);
        sort(a.begin(),a.end());
        return a;
    }
    bool reorderedPowerOf2(int n) {
        string target=countdigit(n);
        for(int i=0;i<31;i++){
            int power=1<<i;
            if(countdigit(power)==target){
                return true;
            }

        }
        return false;
    }
};