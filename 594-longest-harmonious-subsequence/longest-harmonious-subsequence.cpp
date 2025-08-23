class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=0,l=0;
        while(j<nums.size()){
            if(nums[j]-nums[i]==1){
                l=max(l,j-i+1);
                j++;
            }
            else if(nums[j]-nums[i]<1){
               j++;
            }
            else{
                i++;
            }
        }
        return l;
    }
};