class Solution {
public:
    int countWays(vector<vector<int>>& ranges) {
        sort(ranges.begin(),ranges.end());
        vector<vector<int>>merged;
        long long mod=1e9+7;
        merged.push_back(ranges[0]);
        long long c=2;
        for(int i=1;i<ranges.size();i++){
            if(ranges[i][0]<=merged.back()[1]){
                merged.back()[1]=max(merged.back()[1],ranges[i][1]);
            }
            else{
                merged.push_back(ranges[i]);
                c=(c*2)%mod;
            }
        }
        cout<<c;
        return c;
    }
};