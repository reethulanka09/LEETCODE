class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int,int>mpp;
        int s=0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            if(mpp.find(nums[i])!=mpp.end() and mpp[nums[i]]>1) 
            {
                s^=nums[i];
            }
        }
        return s;
    }
};