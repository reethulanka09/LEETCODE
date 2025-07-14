class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=i+1;
        int m=INT_MAX;
        while(j<nums.size()){
            m=min(m,abs(nums[i]-nums[j]));
            i++;
            j++;
        }
        return m;
    }
};