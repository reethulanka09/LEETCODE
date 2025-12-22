class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int ans = INT_MAX;
        for(int i=0;i<nums.size();i++){
            int maxor = nums[i];
            if(maxor>=k) return 1;
            for(int j=i;j<nums.size();j++){
                maxor = maxor | nums[j];
                if(maxor >= k){
                    ans=min(ans,j-i+1);
                    break;
                }
            }
        }
        if(ans==INT_MAX) return -1;
        else return ans;
    }
};