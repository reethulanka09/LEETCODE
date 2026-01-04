class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<=nums.size()-1; i++){
            int cntd=0;
            int d=0;
            for(int j=1; j*j<=nums[i]; j++){
                if(nums[i]%j==0){
                    cntd++;
                    d+=j;
                    if((nums[i]/j)!=j){
                        cntd++;
                        d= d+(nums[i]/j);
                    }
                }
            }
            if(cntd==4){
                sum+=d;
            }
        }
        return sum;
    }
};