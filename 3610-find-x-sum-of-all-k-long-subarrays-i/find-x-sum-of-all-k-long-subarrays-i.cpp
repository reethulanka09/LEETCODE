class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
         map<int,int>mp;
        for(int i=0;i<k;i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>p;
        for(auto it:mp){
            p.push_back({it.first,it.second});
        }
        sort(p.begin(),p.end(),[&](auto &x,auto &y){
            if(x.second==y.second)
                return x.first>y.first;
            return x.second>y.second;
        });

        vector<int>ans;
        int sum=0;
        for(int i=0;i<min((int)p.size(),x);i++)
            sum+=p[i].second*p[i].first;
        ans.push_back(sum);
        for(int i=k;i<nums.size();i++){
            mp[nums[i-k]]--;
            mp[nums[i]]++;
            sum=0;
        p.clear();
        for(auto it:mp){
            p.push_back({it.first,it.second});
        }
        sort(p.begin(),p.end(),[&](auto &x,auto &y){
            if(x.second==y.second)
                return x.first>y.first;
            return x.second>y.second;

        });
                
             for(int j=0;j<min((int)p.size(),x);j++)
            sum+=p[j].second*p[j].first;
        ans.push_back(sum);
            
            
        }

        return ans;
            
    }
};