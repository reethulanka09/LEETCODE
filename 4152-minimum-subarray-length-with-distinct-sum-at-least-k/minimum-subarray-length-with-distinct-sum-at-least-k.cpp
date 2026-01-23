class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        if(nums.size()==1 && nums[0]>=k) return 1;
        int i=0,j=0, ans=100001;
        int sum=0;
        int mp[100001]={0};
        while(j<nums.size()){
            mp[nums[j]]++;
            if(mp[nums[j]]==1){
                sum+=nums[j];
            }
            while(sum>=k){
                if(mp[nums[i]]==1){
                    sum-=nums[i];
                }
                mp[nums[i]]--;
                ans=min(ans, j-i+1);
                i++;
            }
            j++;
        }
        if(ans==100001) return -1;
        return ans;
    }
};