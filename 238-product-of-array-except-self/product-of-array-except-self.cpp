class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefixArray(n,1);
        int sufix = 1;
        vector<int>productArray(n,1);
        prefixArray[0]=1;
        for(int i=1;i<nums.size();i++){
            prefixArray[i] = prefixArray[i-1] * nums[i-1];
        }
        for(int i=nums.size()-1;i>=0;i--){
            productArray[i] = prefixArray[i] * sufix;
            sufix *= nums[i];
        }
        return productArray;
    }
};