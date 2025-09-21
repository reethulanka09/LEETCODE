class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        map<int,int>mpp;
        int i=0,j=0,m=0,s=0;
        while(j<nums.size()){
            s+=nums[j];
            if(mpp.find(nums[j])!=mpp.end()){
                while(nums[i]!=nums[j]){
                    s-=nums[i];
                    mpp[nums[i]]--;
                    if(mpp[nums[i]]==0){
                        mpp.erase(nums[i]);
                    }
                    i++;
                }
                s-=nums[i];
                mpp[nums[i]]--;
                if(mpp[nums[i]]==0){
                        mpp.erase(nums[i]);
                    }
                    i++;
            }
            mpp[nums[j]]++;
            m=max(m,s);
            j++;
        }
        return m;
    }
};