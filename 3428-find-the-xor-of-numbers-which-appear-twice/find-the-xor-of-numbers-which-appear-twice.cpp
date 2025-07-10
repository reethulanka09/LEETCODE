class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int s=0;
        for(auto i:mpp){
            if(i.second>1){
                s^=i.first;
            }
        }
        return s;
    }
};