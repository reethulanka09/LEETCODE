class Solution {
public:
    int possibleStringCount(string word) {
        int c=1;
        int i=0,j=i+1;
        while(j<word.size()){
            if(word[i]!=word[j]){
                c+=(j-i-1);
                i=j;
            }
            j++;
        }
        c+=(j-i-1);
        return c;
    }
};