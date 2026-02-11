class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=nums[0];
        int m=nums[0];
        for(int i=1;i<nums.size();i++){
            m=max(m+nums[i],nums[i]);
            res=max(res,m);
        }
        return res;
    }
};