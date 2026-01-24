class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int m=0;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            m=max(m,nums[i]+nums[j]);
            i=i+1;
            j=j-1;
        }
        return m;
    }
};