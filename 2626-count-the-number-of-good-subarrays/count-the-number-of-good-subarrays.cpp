class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        int c=0,r=-1;
        long long ans=0;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            while(c<k and r+1<nums.size()){
                r++;
                c+=mpp[nums[r]];
                mpp[nums[r]]++;
            }
            if(c>=k){
                ans+=nums.size()-r;
            }
            mpp[nums[i]]--;
            c-=mpp[nums[i]];
        }
        return ans;
    }
};