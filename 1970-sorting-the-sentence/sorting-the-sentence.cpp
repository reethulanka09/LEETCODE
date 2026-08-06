class Solution {
public:
    string sortSentence(string s) {
        string word;
        vector<string>vec(10);
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                vec[s[i]-'0'] = word + " ";
                word = "";
            }
            else if(s[i]!=' '){
                word += s[i];
            }
        }
        string ans;
        for(auto i:vec){
            ans += i;
        }
        ans.pop_back();
        return ans;
    }
};