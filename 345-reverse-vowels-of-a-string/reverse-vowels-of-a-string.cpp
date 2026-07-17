class Solution {
public:
    bool isVowel(char c){
        if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U'){
            return true;
        }
        else{
            return false;
        }
    }
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        while(i<=j){
            if(isVowel(s[i]) and isVowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(isVowel(s[i]) and !isVowel(s[j])){
                j--;
            }
            else{
                i++;
            }
        }
        return s;
    }
};