class Solution {
public:
    void  Daddy(vector<int>&candidates,int i,vector<int>&ans,int target,int size,int sum,vector<vector<int>>&v){
        if(i>=size and sum!=target)
    {
        return;
    }
    else if(sum==target)
    {
        v.push_back(ans);
        return ;
    }
    else if(sum>target)
    {
        return;
    }
    ans.push_back(candidates[i]);
    Daddy(candidates,i+1,ans,target,size,sum+candidates[i],v);
    while(i+1 <size && candidates[i]==candidates[i+1]) i++;
    ans.pop_back();
    Daddy(candidates,i+1,ans,target,size,sum,v);
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>v;
        vector<int>ans;
        sort(candidates.begin(),candidates.end());
        Daddy(candidates,0,ans,target,candidates.size(),0,v);
        set<vector<int>>s(v.begin(),v.end());
        v.clear();
        for(auto it:s)
        {
            v.push_back(it);
        }
        return v;
    }
};