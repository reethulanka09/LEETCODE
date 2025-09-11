class Solution {
public:
    string sortVowels(string s) {
        vector<char>vec;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U'){
                vec.push_back(s[i]);
            }
        }
        sort(vec.begin(),vec.end());
        int i=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='a' or s[j]=='e' or s[j]=='i' or s[j]=='o' or s[j]=='u' or s[j]=='A' or s[j]=='E' or s[j]=='I' or s[j]=='O' or s[j]=='U'){
                swap(s[j],vec[i]);
                i++;
            }
        }
        return s;
    }
};