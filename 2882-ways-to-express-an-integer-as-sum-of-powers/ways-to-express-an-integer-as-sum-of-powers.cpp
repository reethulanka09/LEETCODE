class Solution {
public:
    int numberOfWays(int n, int x) {
        // int c=0;
        vector<long long>powers;
        for(int i=1;i<=n;i++){
            if(pow(i,x)<=n){
                powers.push_back(pow(i,x));
            }
        }
        long long mod=1e9+7;
        vector<vector<long long>> dp(powers.size()+1,vector<long long>(n+1,0));
        for(int i=0;i<=powers.size();i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=powers.size();i++){
            for(int sum=0;sum<=n;sum++){
                dp[i][sum] = dp[i-1][sum];
                if(sum>=powers[i-1]){
                    dp[i][sum]+=(dp[i-1][sum-powers[i-1]])%mod;
                }
            }
        }
        return dp[powers.size()][n]%mod;
    }
};