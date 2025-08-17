class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long prefixsum=0;
        int c=0;
        for(int i=nums.size()-1;i>=0;i--){
            prefixsum+=nums[i];
            if(prefixsum>0) c++;
        }
        return c;
    }
};