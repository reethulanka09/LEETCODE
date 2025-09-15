class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int peak = nums[0];
        int ans = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>peak){
                peak = nums[i];
                ans = i;
            }
        }
        return ans;
    }
};