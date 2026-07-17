class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefixArray(n,1);
        vector<int>suffixArray(n,1);
        vector<int>productArray(n,1);
        prefixArray[0]=1;
        for(int i=1;i<nums.size();i++){
            prefixArray[i] = prefixArray[i-1] * nums[i-1];
        }
        suffixArray[0]=1;
        reverse(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            suffixArray[i] = suffixArray[i-1] * nums[i-1];
        }
        reverse(suffixArray.begin(),suffixArray.end());
        for(int i=0;i<suffixArray.size();i++){
            productArray[i] = suffixArray[i] * prefixArray[i];
        }
        return productArray;
    }
};