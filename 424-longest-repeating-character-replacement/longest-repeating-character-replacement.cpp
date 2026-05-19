class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mpp;
        int i=0,j=0,ans=0,maxFreq=0;
        int r=k;
        while(j<s.size()){
            mpp[s[j]]++;
            maxFreq=max(maxFreq,mpp[s[j]]);
            while((j-i+1) - maxFreq > k){
                mpp[s[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};