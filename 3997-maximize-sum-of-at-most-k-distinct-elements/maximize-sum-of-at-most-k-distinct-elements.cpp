class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        map<int,int>mpp;
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=nums.size()-1;i>=0;i--){
            if(mpp.find(nums[i])==mpp.end() and k>0){
                ans.push_back(nums[i]);
                k--;
            }
            mpp[nums[i]]++;
        }
        return ans;
    }
};