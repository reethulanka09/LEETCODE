class Solution {
public:
    bool stoneGame(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int s=0;
        for(auto i:nums){
            s+=i;
        }
        int alicesum = 0;
        while(i<j){
            if(nums[i]>nums[j]){
                alicesum+=nums[i];
                i++;
            }
            else if(nums[j]>nums[i]){
                alicesum+=nums[j];
                j--;
            }
            else{
                alicesum+=nums[i];
                i++;
                j--;
            }
        }
        if(alicesum > s-alicesum){
            return true;
        }
        else{
            return false;
        }
    }
};
