class Solution {
    public int countPartitions(int[] nums) {
        int ans=0;
        int sum=0;
        int s=0;
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
        }
        for(int i=0;i<nums.length-1;i++){
            s+=nums[i];
            sum-=nums[i];
            if((Math.abs(s-sum))%2==0) ans++;
        }
        return ans;
    }
}