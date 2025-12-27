class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        bool flag = false;
        int len = nums.size();
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        for(int i =0 ; i <len;i++ ){
            if(nums[i]<=min1){
                min1=nums[i];
                
            }
            else if (nums[i]<=min2){
                min2 = nums[i];
            }else{
                flag =  true;
            }
        }
        return flag;
    }
};