class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        int r = k;
        long long ans =0;
        sort(happiness.begin(),happiness.end());
        for(int i=happiness.size()-1;i>=0;i--){
            if(k>0){
            happiness[i]=happiness[i]-(r-k);
            cout<<happiness[i]<<" ";
            if(happiness[i]>0) ans+=happiness[i];
            k--;
            }
            // else{
            //     break;
            // }
        }
        return ans;
    }
};