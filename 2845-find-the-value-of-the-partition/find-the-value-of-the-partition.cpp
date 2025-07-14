class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());int i=0,j=i+1;
        int m=INT_MAX;
        for(int i=0;i<nums.size()-1;i++){
            m=min(m,abs(nums[i]-nums[i+1]));
        }
        return m;
    }
};