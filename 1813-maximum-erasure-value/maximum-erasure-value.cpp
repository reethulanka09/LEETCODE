class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        map<int,int>mpp;
        int i=0,j=0,m=0,s=0;
        while(j<nums.size()){
            s+=nums[j];
            mpp[nums[j]]++;
            if(mpp.find(nums[j])!=mpp.end()){
                while(mpp[nums[j]]>1){
                    s-=nums[i];
                    mpp[nums[i]]--;
                    if(mpp[nums[i]]==0){
                        mpp.erase(nums[i]);
                    }
                    i++;
                }
            }
            m=max(m,s);
            j++;
        }
        return m;
    }
};