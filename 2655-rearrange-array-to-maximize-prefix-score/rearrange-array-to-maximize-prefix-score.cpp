class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        vector<long long>prefixsum;
        prefixsum.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            prefixsum.push_back(prefixsum[i-1]+nums[i]);
        }
        int c=0;
        for(auto i:prefixsum){
            if(i>0) c++;
        }
        return c;
    }
};