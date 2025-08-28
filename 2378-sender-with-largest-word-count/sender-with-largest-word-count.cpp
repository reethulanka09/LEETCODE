class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string,int>mpp;
        int mx=0;
        for(int i=0;i<messages.size();i++){
            int c=1;
            for(auto ch:messages[i]){
                if(ch==' '){
                    c++;
                }
            }
            mpp[senders[i]]+=c;
        }
        for(auto i:mpp){
            mx=max(mx,i.second);
        }
        string ans;
        for(auto i:mpp){
            if(i.second==mx){
                ans=max(ans,i.first);
            }
        }
        return ans;
    }
};