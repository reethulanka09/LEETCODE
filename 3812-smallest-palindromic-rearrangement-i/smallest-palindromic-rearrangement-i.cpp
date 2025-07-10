class Solution {
public:
    string smallestPalindrome(string s) {
        int mid= s.size()/2;
        sort(s.begin(),s.begin()+mid);
        if(s.size()%2==0){
            sort(s.begin()+mid,s.end());
            reverse(s.begin()+mid,s.end());
        }
        else{
            sort(s.begin()+mid+1,s.end());
            reverse(s.begin()+mid+1,s.end());
        }
        return s;
    }
};