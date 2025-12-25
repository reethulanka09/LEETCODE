class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        int r = k;
        long long ans =0;
        sort(happiness.begin(),happiness.end());
        for(int i=happiness.size()-1;i>=0;i--){
            if(k>0 and happiness[i]-(r-k)>0){
            ans+=happiness[i]-(r-k);
            k--;
            }
            else {
                break;
            }
        }
        return ans;
    }
};