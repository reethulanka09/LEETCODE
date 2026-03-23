class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int incre=0,decre=0,eq=0;
        if(nums.size()==1) return true;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                eq++;
            }
            else if(nums[i]>nums[i-1]){
                incre++;
            }
            else{
                decre++;
            }
        }
        // cout<<incre<<" "<<decre;
        if(incre>0) incre+=eq;
        else decre+=eq;
        if((incre==0 and decre>0) or (decre==0 and incre>0))
        {
            return true;
        }
        else return false;
    }
};