class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int prefix=1;
        int sufix = 1;
        vector<int>productArray(n,1);
        for(int i=0;i<nums.size();i++){
            productArray[i] = prefix;
            prefix *= nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            productArray[i] *= sufix;
            sufix *= nums[i];
        }
        return productArray;
    }
};