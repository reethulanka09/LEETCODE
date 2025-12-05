class Solution {
    public int countPartitions(int[] nums) {
        int ans=0;
        int sum=0;
        int s=0;
        for(int num:nums){
            sum+=num;
        }
        for(int i=0;i<nums.length-1;i++){
            s+=nums[i];
            sum-=nums[i];
            if((sum-s)%2==0) ans++;
        }
        return ans;
    }
}