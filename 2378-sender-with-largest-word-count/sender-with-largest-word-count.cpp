class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string,int>mpp;
        for(int i=0;i<messages.size();i++){
            int c=0;
            for(int j=0;j<messages[i].size();j++){
                if(messages[i][j]==' '){
                    c++;
                }
            }
            c++;
            mpp[senders[i]]+=c;
        }
        int mx=0;
        for(auto i:mpp){
            mx=max(mx,i.second);
        }
        vector<string>ans;
        for(auto i:mpp){
            if(i.second==mx){
                ans.push_back(i.first);
            }
        }
        // for(auto i:ans){
        //     cout<<i<<" ";
        // }
        string res;
        if(ans.size()==1){
            res=ans[0];
        }
        else{
            res=*max_element(ans.begin(),ans.end());
        }
        return res;
    }
};