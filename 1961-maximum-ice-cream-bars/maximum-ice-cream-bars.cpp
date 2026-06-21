class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int ans =0;
        int mx = *max_element(costs.begin(),costs.end());
        vector<int>counter(mx+1,0);
        for(auto count:costs) counter[count]++;
        for(int i=1;i<=mx;i++){
            while(counter[i]>0 && coins>=i){
                counter[i]--;
                ans++;
                coins-=i;

            }
        }
        return ans;
    }
};