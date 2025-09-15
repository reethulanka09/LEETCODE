class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
       map<char,int>mpp;
       for(auto i:brokenLetters){
        mpp[i]++;
       } 
       int ans = 0 , bl = 0;
       for(int i=0;i<text.size();i++){
        if(mpp.find(text[i])!=mpp.end()){
            bl++;
        }
        if(text[i]== ' '){
            if(bl==0){
                ans++;
            }
            else{
                bl=0;
            }
        }
       }
       if(bl==0) ans++;
       return ans;
    }
};