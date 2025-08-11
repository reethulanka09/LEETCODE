class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<long long>powers;
        long long mod=1e9+7;
        for (int i=0;n>0;i++) {
            if (n&1) 
            {
                powers.push_back(1LL<<i);
            }
            n>>=1;
        }
        // vector<long long>ans;
        // ans.push_back(powers[0]);
        // for(int i=1;i<powers.size();i++){
        //     ans.push_back((ans[i-1]*powers[i])%mod);
        // }
        // for(auto i:ans){
        //     cout<<i<<" ";
        // }
        vector<int>res;
        for(int i=0;i<queries.size();i++){
            int l=queries[i][0],r=queries[i][1];
            // if(l!=r or (l==0 and r==0)){
            //     res.push_back((ans[r])%mod);
            // }
            // else {
            //     if(r<ans.size()) res.push_back((ans[r]/2)%mod);
            //     else res.push_back((ans[r])%mod);
            // }
            long long s=1;
            for(long long j=l;j<=r;j++){
                s=(s*powers[j])%mod;
            }
            res.push_back(s);
        }
        return res;
    }
};