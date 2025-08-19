class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long c=0;
        int i=0,j=0;
        for(int r=0;r<nums.size();r++){
            if(nums[r]==0) 
            {
                i=r; 
                j=r;
                break;
            }
        }
        while(j<nums.size()){
            if(nums[j]==0){
                c+=(j-i+1);
                j++;
            }
            else{
                i=j;
                i++;
                j++;
            }
        }
        return c;
    }
};