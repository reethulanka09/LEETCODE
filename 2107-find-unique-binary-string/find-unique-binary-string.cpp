class Solution {
public:
    void subs(vector<string>&res,int n,string s){
        if(s.size() == n){
            res.push_back(s);
            return ;
        }
        subs(res,n,s+"0");
        subs(res,n,s+"1");
    }
    string findDifferentBinaryString(vector<string>& nums) {
        vector<string>res;
        subs(res,nums.size(),"");
        map<string,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto i:res){
            if(mpp.find(i)==mpp.end()){
                return i;
            }
        }
        return "";
    }
};