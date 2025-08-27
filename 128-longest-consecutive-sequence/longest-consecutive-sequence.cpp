class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int m=0,c=1;
        sort(nums.begin(),nums.end());
        int i=0,j=i+1;
        if(nums.size()==0)  return 0;
        while(j<nums.size()){
            if(nums[j]-nums[j-1]==1){
                c++;
                j++;
            }
            else if(nums[j]==nums[j-1]){
                j++;
            }
            else {
                m=max(m,c);
                c=1;
                i=j;
                i++;
                j++;
            }
        }
        m=max(m,c);
        return m;
    }
};