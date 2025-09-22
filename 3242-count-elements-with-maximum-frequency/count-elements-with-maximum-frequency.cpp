class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int m=0;
        for(auto i:mpp){
            m=max(m,i.second);
        }
        int ans=0;
        for(auto i:mpp){
            if(i.second==m){
                ans+=i.second;
            }
        }
        return ans;
    }
};